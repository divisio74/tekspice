/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** OrGate.cpp
*/

#include "../../../include/Components/Elementary/OrGate.hpp"

nts::Tristate nts::OrGate::compute(std::size_t pin)
{
    if (pin == 1 || pin == 2)
        return getLinkValue(pin);
    if (pin != 3)
        return nts::Undefined;

    nts::Tristate a = getLinkValue(1);
    nts::Tristate b = getLinkValue(2);

    if (a == True || b == True)
        return True;
    if (a == Undefined || b == Undefined)
        return Undefined;
    return False;
}
