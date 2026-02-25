/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4801.cpp
*/

#include "../../../include/Components/Advanced/C4801.hpp"

void nts::C4801::simulate(std::size_t tick)
{
    (void)tick;

    nts::Tristate ce = getLinkValue(18);
    nts::Tristate we = getLinkValue(21);
    nts::Tristate a0 = getLinkValue(8);
    nts::Tristate a1 = getLinkValue(7);
    nts::Tristate a2 = getLinkValue(6);
    nts::Tristate a3 = getLinkValue(5);
    nts::Tristate a4 = getLinkValue(4);
    nts::Tristate a5 = getLinkValue(3);
    nts::Tristate a6 = getLinkValue(2);
    nts::Tristate a7 = getLinkValue(1);
    nts::Tristate a8 = getLinkValue(22);
    nts::Tristate a9 = getLinkValue(19);
    nts::Tristate d0 = getLinkValue(9);
    nts::Tristate d1 = getLinkValue(10);
    nts::Tristate d2 = getLinkValue(11);
    nts::Tristate d3 = getLinkValue(13);
    nts::Tristate d4 = getLinkValue(14);
    nts::Tristate d5 = getLinkValue(15);
    nts::Tristate d6 = getLinkValue(16);
    nts::Tristate d7 = getLinkValue(17);

    if (ce != False || we != False)
        return;

    if (a0 == Undefined || a1 == Undefined || a2 == Undefined || a3 == Undefined ||
        a4 == Undefined || a5 == Undefined || a6 == Undefined || a7 == Undefined ||
        a8 == Undefined || a9 == Undefined)
        return;

    if (d0 == Undefined || d1 == Undefined || d2 == Undefined || d3 == Undefined ||
        d4 == Undefined || d5 == Undefined || d6 == Undefined || d7 == Undefined)
        return;

    int addr = (a0 == True) | ((a1 == True) << 1) | ((a2 == True) << 2) | ((a3 == True) << 3) |
        ((a4 == True) << 4) | ((a5 == True) << 5) | ((a6 == True) << 6) | ((a7 == True) << 7) |
        ((a8 == True) << 8) | ((a9 == True) << 9);


    _memory[addr] = (d0 == True)        |
                    ((d1 == True) << 1) |
                    ((d2 == True) << 2) |
                    ((d3 == True) << 3) |
                    ((d4 == True) << 4) |
                    ((d5 == True) << 5) |
                    ((d6 == True) << 6) |
                    ((d7 == True) << 7);
    _initialized[addr] = true;
}

nts::Tristate nts::C4801::compute(std::size_t pin)
{
    nts::Tristate ce = getLinkValue(18);
    nts::Tristate oe = getLinkValue(20);
    nts::Tristate we = getLinkValue(21);
    nts::Tristate a0 = getLinkValue(8);
    nts::Tristate a1 = getLinkValue(7);
    nts::Tristate a2 = getLinkValue(6);
    nts::Tristate a3 = getLinkValue(5);
    nts::Tristate a4 = getLinkValue(4);
    nts::Tristate a5 = getLinkValue(3);
    nts::Tristate a6 = getLinkValue(2);
    nts::Tristate a7 = getLinkValue(1);
    nts::Tristate a8 = getLinkValue(22);
    nts::Tristate a9 = getLinkValue(19);

    if (pin == 18 || pin == 20 || pin == 21 ||
        pin == 8  || pin == 7  || pin == 6  || pin == 5 ||
        pin == 4  || pin == 3  || pin == 2  || pin == 1 ||
        pin == 22 || pin == 19)
        return getLinkValue(pin);

    if (ce != False || oe != False || we != True)
        return Undefined;

    if (a0 == Undefined || a1 == Undefined || a2 == Undefined || a3 == Undefined ||
        a4 == Undefined || a5 == Undefined || a6 == Undefined || a7 == Undefined ||
        a8 == Undefined || a9 == Undefined)
        return Undefined;

    int addr = (a0 == True) | ((a1 == True) << 1) |
        ((a2 == True) << 2) | ((a3 == True) << 3) |
        ((a4 == True) << 4) | ((a5 == True) << 5) |
        ((a6 == True) << 6) | ((a7 == True) << 7) |
        ((a8 == True) << 8) | ((a9 == True) << 9);

    if (!_initialized[addr])
        return Undefined;

    int byte = _memory[addr];

    if (pin == 9) {
        if (byte & (1 << 0))
            return True;
        return False;
    }

    if (pin == 10) {
        if (byte & (1 << 1))
            return True;
        return False;
    }

    if (pin == 11) {
        if (byte & (1 << 2))
            return True;
        return False;
    }

    if (pin == 13) {
        if (byte & (1 << 3))
            return True;
        return False;
    }

    if (pin == 14) {
        if (byte & (1 << 4))
            return True;
        return False;
    }

    if (pin == 15) {
        if (byte & (1 << 5))
            return True;
        return False;
    }

    if (pin == 16) {
        if (byte & (1 << 6))
            return True;
        return False;
    }

    if (pin == 17) {
        if (byte & (1 << 7))
            return True;
        return False;
    }

    return Undefined;
}
