/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-nanotekspice-10
** File description:
** main.cpp
*/

#include "include/VM/VM.hpp"
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Usage: ./nanotekspice <file.nts>" << std::endl;
        return 84;
    }
    try {
        std::ofstream("./log.bin", std::ios::binary | std::ios::trunc);
        nts::VM vm(argv[1]);
        vm.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 84;
    }
    return 0;
}
