/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-True
** File description:
** True.hpp
*/

#include "../../../include/Components/TrueComponent.hpp"

nts::Tristate nts::TrueComponent::compute(std::size_t pin)
{
    if (pin != 1)
        return nts::Undefined;
    return _value;
}

