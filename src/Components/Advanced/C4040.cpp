/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4040.cpp
*/

#include "../../../include/Components/Advanced/C4040.hpp"

void nts::C4040::simulate(std::size_t tick)
{
    (void)tick;

    nts::Tristate clk = getLinkValue(10);
    nts::Tristate rst = getLinkValue(11);

    if (rst == True) {
        _count = 0;
        _prevClk = clk;
        return;
    }

    if (_prevClk == True && clk == False)
        _count = (_count + 1) % 4096;
    _prevClk = clk;
}

nts::Tristate nts::C4040::compute(std::size_t pin)
{
    if (pin == 10 || pin == 11)
        return getLinkValue(pin);

    if (pin == 9) {
        if (_count & (1 << 0))
            return True;
        return False;
    }

    if (pin == 7) {
        if (_count & (1 << 1))
            return True;
        return False;
    }

    if (pin == 6) {
        if (_count & (1 << 2))
            return True;
        return False;
    }

    if (pin == 5) {
        if (_count & (1 << 3))
            return True;
        return False;
    }

    if (pin == 3) {
        if (_count & (1 << 4))
            return True;
        return False;
    }

    if (pin == 2) {
        if (_count & (1 << 5))
            return True;
        return False;
    }

    if (pin == 4) {
        if (_count & (1 << 6))
            return True;
        return False;
    }

    if (pin == 13) {
        if (_count & (1 << 7))
            return True;
        return False;
    }

    if (pin == 12) {
        if (_count & (1 << 8))
            return True;
        return False;
    }

    if (pin == 14) {
        if (_count & (1 << 9))
            return True;
        return False;
    }

    if (pin == 15) {
        if (_count & (1 << 10))
            return True;
        return False;
    }

    if (pin == 1) {
        if (_count & (1 << 11))
            return True;
        return False;
    }

    return Undefined;
}
