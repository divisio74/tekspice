/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4069.cpp
*/

#include "../../../include/Components/Gates/C4069.hpp"

nts::C4069::C4069()
{
    addInternal("a", std::make_unique<NotGate>());
    mapPin(1,  "a", 1);
    mapPin(2,  "a", 2);
    addInternal("b", std::make_unique<NotGate>());
    mapPin(3,  "b", 1);
    mapPin(4,  "b", 2);
    addInternal("c", std::make_unique<NotGate>());
    mapPin(5,  "c", 1);
    mapPin(6,  "c", 2);
    addInternal("d", std::make_unique<NotGate>());
    mapPin(9,  "d", 1);
    mapPin(8,  "d", 2);
    addInternal("e", std::make_unique<NotGate>());
    mapPin(11, "e", 1);
    mapPin(10, "e", 2);
    addInternal("f", std::make_unique<NotGate>());
    mapPin(13, "f", 1);
    mapPin(12, "f", 2);
}
