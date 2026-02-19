/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Input
** File description:
** Input.hpp
*/

#include "../../include/Components/Input.hpp"

nts::Tristate nts::Input::compute(std::size_t pin)
{
    if (pin != 1)
        return nts::Undefined;
    return _value;
}
void nts::Input::setValue(nts::Tristate value)
{
    _value = value;
}
