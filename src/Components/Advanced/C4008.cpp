/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4008.cpp
*/

#include "../../../include/Components/Advanced/C4008.hpp"

nts::Tristate nts::C4008::compute(std::size_t pin)
{
    nts::Tristate a1 = getLinkValue(14);
    nts::Tristate a2 = getLinkValue(11);
    nts::Tristate a3 = getLinkValue(6);
    nts::Tristate a4 = getLinkValue(2);
    nts::Tristate b1 = getLinkValue(13);
    nts::Tristate b2 = getLinkValue(10);
    nts::Tristate b3 = getLinkValue(5);
    nts::Tristate b4 = getLinkValue(1);
    nts::Tristate ci = getLinkValue(3);
    nts::Tristate inputs[9] = {a1, a2, a3, a4, b1, b2, b3, b4, ci};

    if (pin == 14 || pin == 11 || pin == 6  || pin == 2  ||
        pin == 13 || pin == 10 || pin == 5  || pin == 1  || pin == 3)
        return getLinkValue(pin);

    for (int i = 0; i < 9; i++)
        if (inputs[i] == Undefined)
            return Undefined;

    int va = (a1==True) | ((a2==True)<<1) | ((a3==True)<<2) | ((a4==True)<<3);
    int vb = (b1==True) | ((b2==True)<<1) | ((b3==True)<<2) | ((b4==True)<<3);
    int carry = 0;
    if (ci == True)
        carry = 1;

    int sum = va + vb + carry;

    if (pin == 12) {
    if (sum & 0b00001)
        return True;
    return False;
}

if (pin == 9) {
    if (sum & 0b00010)
        return True;
    return False;
}
if (pin == 7) {
    if (sum & 0b00100)
        return True;
    return False;
}
if (pin == 4) {
    if (sum & 0b01000)
        return True;
    return False;
}
if (pin == 15) {
    if (sum & 0b10000)
        return True;
    return False;
}

    return Undefined;
}
