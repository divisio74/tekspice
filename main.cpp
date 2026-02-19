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
        std::string line;
        bool looping = false;

        while (true) {
            if (!looping)
                std::cout << "> ";

            if (!std::getline(std::cin, line))
                break;
            if (line.empty())
                continue;

            if (line == "exit")
                break;
            else if (line == "display")
                circuit.display();
            else if (line == "simulate") {
                circuit.simulate(circuit.getTick() + 1);
            }
            else if (line == "loop") {
                looping = true;
                while (true) {
                    circuit.simulate(circuit.getTick() + 1);
                }
            }
            else {
                std::size_t eq = line.find('=');
                if (eq != std::string::npos) {
                    std::string name = line.substr(0, eq);
                    std::string value = line.substr(eq + 1);
                    nts::Tristate val;
                    if (value == "0")
                        val = nts::False;
                    else if (value == "1")
                        val = nts::True;
                    else if (value == "U")
                        val = nts::Undefined;
                    else throw std::invalid_argument("Invalid value: " + value);

                    circuit.setInputValue(name, val);
                }
                else {
                    std::cerr << "Unknown command: " << line << std::endl;
                }
            }
        }

    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 84;
    }

    return 0;
}