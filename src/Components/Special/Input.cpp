/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Input
** File description:
** Input.hpp
*/

#include "../../../include/Components/Special/Input.hpp"

nts::Tristate nts::Input::compute(std::size_t pin)
{
    if (pin != 1)
        return nts::Undefined;
    return _displayValue;
}

void nts::Input::setValue(nts::Tristate value)
{
    _nextValue = value;
}

void nts::Input::simulate(std::size_t tick)
{
    (void)tick;
    _value = _nextValue;
    _displayValue = _value;
}
