/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** NorGate.cpp
*/

#include "../../../include/Components/Gates/NorGate.hpp"

nts::Tristate nts::NorGate::compute(std::size_t pin)
{
    if (pin == 1 || pin == 2)
        return getLinkValue(pin);
    if (pin != 3)
        return nts::Undefined;

    nts::Tristate a = getLinkValue(1);
    nts::Tristate b = getLinkValue(2);

    if (a == nts::True || b == nts::True)
        return nts::False;
    if (a == nts::Undefined || b == nts::Undefined)
        return nts::Undefined;
    return nts::True;
}
