/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4514.cpp
*/

#include "../../../include/Components/Advanced/C4514.hpp"

void nts::C4514::simulate(std::size_t tick)
{
    (void)tick;

    nts::Tristate str = getLinkValue(9);

    if (str != True)
        return;

    nts::Tristate a0 = getLinkValue(21);
    nts::Tristate a1 = getLinkValue(1);
    nts::Tristate a2 = getLinkValue(22);
    nts::Tristate a3 = getLinkValue(23);

    if (a0 == Undefined || a1 == Undefined || a2 == Undefined || a3 == Undefined) {
        _latch = -1;
        return;
    }

    _latch = (a0 == True) | ((a1 == True) << 1) | ((a2 == True) << 2) | ((a3 == True) << 3);
}

nts::Tristate nts::C4514::compute(std::size_t pin)
{
    nts::Tristate inh = getLinkValue(16);

    if (pin == 9 || pin == 16 || pin == 21 || pin == 1 || pin == 22 || pin == 23)
        return getLinkValue(pin);

    if (inh == True)
        return False;

    if (_latch == -1)
        return Undefined;

    if (pin == 20) {
        if (_latch == 0)
            return True;
        return False;
    }

    if (pin == 3) {
        if (_latch == 1)
            return True;
        return False;
    }

    if (pin == 4) {
        if (_latch == 2)
            return True;
        return False;
    }

    if (pin == 7) {
        if (_latch == 3)
            return True;
        return False;
    }

    if (pin == 19) {
        if (_latch == 4)
            return True;
        return False;
    }

    if (pin == 2) {
        if (_latch == 5)
            return True;
        return False;
    }

    if (pin == 5) {
        if (_latch == 6)
            return True;
        return False;
    }

    if (pin == 6) {
        if (_latch == 7)
            return True;
        return False;
    }

    if (pin == 10) {
        if (_latch == 8)
            return True;
        return False;
    }

    if (pin == 11) {
        if (_latch == 9)
            return True;
        return False;
    }

    if (pin == 18) {
        if (_latch == 10)
            return True;
        return False;
    }

    if (pin == 17) {
        if (_latch == 11)
            return True;
        return False;
    }

    if (pin == 15) {
        if (_latch == 12)
            return True;
        return False;
    }

    if (pin == 12) {
        if (_latch == 13)
            return True;
        return False;
    }

    if (pin == 13) {
        if (_latch == 14)
            return True;
        return False;
    }

    if (pin == 14) {
        if (_latch == 15)
            return True;
        return False;
    }

    return Undefined;
}
