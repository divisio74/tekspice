/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4512.cpp
*/

#include "../../../include/Components/Advanced/C4512.hpp"

nts::Tristate nts::C4512::compute(std::size_t pin)
{
    nts::Tristate inh = getLinkValue(4);
    nts::Tristate a = getLinkValue(1);
    nts::Tristate b = getLinkValue(2);
    nts::Tristate c = getLinkValue(3);

    if (pin != 14)
        return getLinkValue(pin);

    if (inh == True)
        return False;

    if (a == Undefined || b == Undefined || c == Undefined)
        return Undefined;

    int addr = (a == True) | ((b == True) << 1) | ((c == True) << 2);

    if (addr == 0)
        return getLinkValue(13);
    if (addr == 1)
        return getLinkValue(9);
    if (addr == 2)
        return getLinkValue(7);
    if (addr == 3)
        return getLinkValue(11);
    if (addr == 4)
        return getLinkValue(5);
    if (addr == 5)
        return getLinkValue(10);
    if (addr == 6)
        return getLinkValue(6);
    if (addr == 7)
        return getLinkValue(12);

    return Undefined;
}
