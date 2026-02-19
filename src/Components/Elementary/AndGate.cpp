/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** AndGate.cpp
*/

#include "../../../include/Components/Elementary/AndGate.hpp"

nts::Tristate nts::AndGate::compute(std::size_t pin)
{
    if (pin == 1 || pin == 2)
        return getLinkValue(pin);
    if (pin != 3)
        return nts::Undefined;

    nts::Tristate a = getLinkValue(1);
    nts::Tristate b = getLinkValue(2);

    if (a == False || b == False)
        return False;
    if (a == Undefined || b == Undefined)
        return Undefined;
    return True;
}
