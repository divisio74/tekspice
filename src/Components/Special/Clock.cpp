/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Clock
** File description:
** Clock.hpp
*/

#include "../../../include/Components/Special/Clock.hpp"

nts::Tristate nts::Clock::compute(std::size_t pin)
{
    if (pin != 1)
        return nts::Undefined;
    return _value;
}

void nts::Clock::simulate(std::size_t tick)
{
    (void)tick;
    if (_nextValue != nts::Undefined) {
        _value = _nextValue;
    }
    else if (_value == nts::True)
        _value = nts::False;
    else if (_value == nts::False)
        _value = nts::True;
}

void nts::Clock::setValue(nts::Tristate value)
{
    _nextValue = value;
}
