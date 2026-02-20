/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4011.cpp
*/

#include "../../../include/Components/Gates/C4011.hpp"

nts::C4011::C4011()
{
    addInternal("a", std::make_unique<NandGate>());
    mapPin(1,  "a", 1);
    mapPin(2,  "a", 2);
    mapPin(3,  "a", 3);
    addInternal("b", std::make_unique<NandGate>());
    mapPin(5,  "b", 1);
    mapPin(6,  "b", 2);
    mapPin(4,  "b", 3);
    addInternal("c", std::make_unique<NandGate>());
    mapPin(8,  "c", 1);
    mapPin(9,  "c", 2);
    mapPin(10, "c", 3);
    addInternal("d", std::make_unique<NandGate>());
    mapPin(12, "d", 1);
    mapPin(13, "d", 2);
    mapPin(11, "d", 3);
}
