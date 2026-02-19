/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** XorGate.cpp
*/

#include "../../../include/Components/Elementary/XorGate.hpp"
#include "../../../include/Components/Logic.hpp"

nts::Tristate nts::XorGate::compute(std::size_t pin)
{
    if (pin != 3)
        return nts::Undefined;
    nts::Tristate a = getLinkValue(1);
    nts::Tristate b = getLinkValue(2);
    return xorLogic(a, b);
}
