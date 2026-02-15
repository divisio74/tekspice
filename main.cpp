/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-nanotekspice-10
** File description:
** main.cpp
*/

#include <iostream>
#include "include/Parser/Parser.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Usage: ./nanotekspice <file.nts>" << std::endl;
        return 84;
    }
    try {
        nts::Parser parser(argv[1]);
        nts::Circuit circuit = parser.parse();
        circuit.display();
        circuit.setInputValue("in1", nts::True);
        circuit.simulate(1);
        circuit.display();
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 84;
    }
    return 0;
}
