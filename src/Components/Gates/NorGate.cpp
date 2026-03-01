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

    if (_computing)
        return _state;
    _computing = true;

    nts::Tristate a = getLinkValue(1);
    nts::Tristate b = getLinkValue(2);

    if (a == nts::True || b == nts::True)
        _state = nts::False;
    else if (a == nts::Undefined || b == nts::Undefined)
        _state = nts::Undefined;
    else
        _state = nts::True;

    _computing = false;
    return _state;
}
