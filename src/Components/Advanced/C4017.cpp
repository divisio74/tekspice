/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4017.cpp
*/

#include "../../../include/Components/Advanced/C4017.hpp"

void nts::C4017::simulate(std::size_t tick)
{
    (void)tick;

    nts::Tristate clk    = getLinkValue(15);
    nts::Tristate clkInh = getLinkValue(14);
    nts::Tristate ce     = getLinkValue(13);

    if (_prevClk == False && clk == True
        && clkInh != True && ce != False)
        _count = (_count + 1) % 10;
    _prevClk = clk;
}

nts::Tristate nts::C4017::compute(std::size_t pin)
{
    if (pin == 15 || pin == 14 || pin == 13)
        return getLinkValue(pin);

    if (pin == 12) {
        if (_count < 5)
            return True;
        return False;
    }

    if (pin == 3) {
        if (_count == 0)
            return True;
        return False;
    }

    if (pin == 2) {
        if (_count == 1)
            return True;
        return False;
    }

    if (pin == 4) {
        if (_count == 2)
            return True;
        return False;
    }

    if (pin == 7) {
        if (_count == 3)
            return True;
        return False;
    }

    if (pin == 10) {
        if (_count == 4)
            return True;
        return False;
    }

    if (pin == 1) {
        if (_count == 5)
            return True;
        return False;
    }

    if (pin == 5) {
        if (_count == 6)
            return True;
        return False;
    }

    if (pin == 6) {
        if (_count == 7)
            return True;
        return False;
    }

    if (pin == 9) {
        if (_count == 8)
            return True;
        return False;
    }

    if (pin == 11) {
        if (_count == 9)
            return True;
        return False;
    }
    return Undefined;
}
