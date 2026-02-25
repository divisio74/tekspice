/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4094.cpp
*/

#include "../../../include/Components/Advanced/C4094.hpp"

void nts::C4094::simulate(std::size_t tick)
{
    (void)tick;

    nts::Tristate clk    = getLinkValue(3);
    nts::Tristate data   = getLinkValue(2);
    nts::Tristate strobe = getLinkValue(1);

    if (_prevClk == False && clk == True) {
        _qs2      = _shift[7];
        _shift[7] = _shift[6];
        _shift[6] = _shift[5];
        _shift[5] = _shift[4];
        _shift[4] = _shift[3];
        _shift[3] = _shift[2];
        _shift[2] = _shift[1];
        _shift[1] = _shift[0];
        _shift[0] = data;

        if (strobe == True) {
            _latch[0] = _shift[0];
            _latch[1] = _shift[1];
            _latch[2] = _shift[2];
            _latch[3] = _shift[3];
            _latch[4] = _shift[4];
            _latch[5] = _shift[5];
            _latch[6] = _shift[6];
            _latch[7] = _shift[7];
        }
    }
    _prevClk = clk;
}

nts::Tristate nts::C4094::compute(std::size_t pin)
{
    nts::Tristate oe = getLinkValue(15);

    if (pin == 1 || pin == 2 || pin == 3 || pin == 15)
        return getLinkValue(pin);

    if (pin == 9)
        return _shift[7];

    if (pin == 10)
        return _qs2;

    if (oe != True)
        return Undefined;

    if (pin == 4)
        return _latch[0];

    if (pin == 5)
        return _latch[1];

    if (pin == 6)
        return _latch[2];

    if (pin == 7)
        return _latch[3];

    if (pin == 14)
        return _latch[4];

    if (pin == 13)
        return _latch[5];

    if (pin == 12)
        return _latch[6];

    if (pin == 11)
        return _latch[7];

    return Undefined;
}
