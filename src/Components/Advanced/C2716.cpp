/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C2716.cpp
*/

#include "../../../include/Components/Advanced/C2716.hpp"

nts::C2716::C2716()
{
    std::ifstream file("./rom.bin", std::ios::binary);

    if (!file.is_open())
        return;

    for (int i = 0; i < 2048; i++) {
        char byte;
        if (!file.read(&byte, 1))
            break;
        _memory[i] = static_cast<unsigned char>(byte);
    }
    _loaded = true;
}

nts::Tristate nts::C2716::compute(std::size_t pin)
{
    nts::Tristate ce = getLinkValue(18);
    nts::Tristate oe = getLinkValue(20);
    nts::Tristate a0  = getLinkValue(8);
    nts::Tristate a1  = getLinkValue(7);
    nts::Tristate a2  = getLinkValue(6);
    nts::Tristate a3  = getLinkValue(5);
    nts::Tristate a4  = getLinkValue(4);
    nts::Tristate a5  = getLinkValue(3);
    nts::Tristate a6  = getLinkValue(2);
    nts::Tristate a7  = getLinkValue(1);
    nts::Tristate a8  = getLinkValue(23);
    nts::Tristate a9  = getLinkValue(22);
    nts::Tristate a10 = getLinkValue(19);

    if (pin == 18 || pin == 20 || pin == 21 ||
        pin == 8  || pin == 7  || pin == 6  || pin == 5 ||
        pin == 4  || pin == 3  || pin == 2  || pin == 1 ||
        pin == 23 || pin == 22 || pin == 19)
        return getLinkValue(pin);

    if (!_loaded)
        return Undefined;

    if (ce != False || oe != False)
        return Undefined;

    if (a0 == Undefined || a1 == Undefined || a2  == Undefined || a3 == Undefined ||
        a4 == Undefined || a5 == Undefined || a6  == Undefined || a7 == Undefined ||
        a8 == Undefined || a9 == Undefined || a10 == Undefined)
        return Undefined;

    int addr = (a0  == True) | ((a1  == True) << 1) |
        ((a2  == True) << 2) | ((a3  == True) << 3) |
        ((a4  == True) << 4) | ((a5  == True) << 5) |
        ((a6  == True) << 6) | ((a7  == True) << 7) |
        ((a8  == True) << 8) | ((a9  == True) << 9) | ((a10 == True) << 10);

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
