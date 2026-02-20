/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** NandGate.cpp
*/

#include "../../../include/Components/Gates/NandGate.hpp"

nts::Tristate nts::NandGate::compute(std::size_t pin)
{
    if (pin == 1 || pin == 2)
        return getLinkValue(pin);
    if (pin != 3)
        return nts::Undefined;

    nts::Tristate a = getLinkValue(1);
    nts::Tristate b = getLinkValue(2);

    if (a == nts::False || b == nts::False)
        return nts::True;
    if (a == nts::Undefined || b == nts::Undefined)
        return nts::Undefined;
    return nts::False;
}
