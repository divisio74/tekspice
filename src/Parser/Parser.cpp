/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Parser
** File description:
** Parser.cpp
*/

#include "../../include/Parser/Parser.hpp"
#include "../../include/Factory/Factory.hpp"
#include <iostream>
#include <sstream>

nts::Parser::Parser(const std::string &filename)
{
    if (filename.size() < 4 || filename.substr(filename.size() - 4) != ".nts")
        throw std::invalid_argument("Invalid file extension: expected .nts");
    _file.open(filename);
    if (!_file.is_open())
        throw std::invalid_argument("Cannot open file: " + filename);
}

nts::Parser::~Parser()
{
    if (_file.is_open())
        _file.close();
}

static std::string trimLine(const std::string &line)
{
    std::size_t start = line.find_first_not_of(" \t");
    if (start == std::string::npos)
        return "";
    std::size_t end = line.find_last_not_of(" \t");
    return line.substr(start, end - start + 1);
}

static std::string removeComment(const std::string &line)
{
    std::size_t pos = line.find('#');
    if (pos == std::string::npos)
        return line;
    return line.substr(0, pos);
}

nts::Circuit nts::Parser::parse()
{
    Circuit circuit;

    parsechipset(circuit);
    if (circuit.isempty())
        throw std::invalid_argument("No chipsets in the circuit");
    parselinks(circuit);
    return circuit;
}

void nts::Parser::parsechipset(Circuit &circuit)
{
    std::string line;
    bool inChipsets = false;
    Factory factory;
    std::istringstream iss(line);
    std::string type;
    std::string name;
    std::string extra;

    while (std::getline(_file, line)) {
        line = removeComment(line);
        line = trimLine(line);
        if (line.empty())
            continue;
        if (line == ".chipsets:") {
            inChipsets = true;
            continue;
        }
        if (line == ".links:") {
            return;
        }
        if (!inChipsets)
            throw std::invalid_argument("Expected .chipsets: section");
        if (!(iss >> type >> name))
            throw std::invalid_argument("Invalid chipset line: " + line);
        if (iss >> extra)
            throw std::invalid_argument("Too many arguments on line: " + line);
        circuit.addComponent(name, factory.createComponent(type), type);
    }
}

void nts::Parser::parselinks(Circuit &circuit)
{
    std::string line;
    std::istringstream iss(line);
    std::string link1;
    std::string link2;
    std::string extra;
    std::size_t sep1;
    std::size_t sep2;
    std::string name1;
    std::size_t pin1;
    std::string name2;
    std::size_t pin2;

    while (std::getline(_file, line)) {
        line = removeComment(line);
        line = trimLine(line);
        if (line.empty())
            continue;
        if (line[0] == '.')
            throw std::invalid_argument("Unexpected section: " + line);
        if (!(iss >> link1 >> link2))
            throw std::invalid_argument("Invalid link line: " + line);
        if (iss >> extra)
            throw std::invalid_argument("Too many arguments on line: " + line);
        sep1 = link1.find(':');
        sep2 = link2.find(':');
        if (sep1 == std::string::npos || sep2 == std::string::npos)
            throw std::invalid_argument("Invalid link format: " + line);
        name1 = link1.substr(0, sep1);
        pin1 = std::stoul(link1.substr(sep1 + 1));
        name2 = link2.substr(0, sep2);
        pin2 = std::stoul(link2.substr(sep2 + 1));
        circuit.getComponent(name1).setLink(pin1, circuit.getComponent(name2), pin2);
        circuit.getComponent(name2).setLink(pin2, circuit.getComponent(name1), pin1);
    }
}
