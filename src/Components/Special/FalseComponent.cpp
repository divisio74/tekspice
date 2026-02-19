/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-False
** File description:
** False.hpp
*/

#include "../../../include/Components/Special/FalseComponent.hpp"

nts::Tristate nts::FalseComponent::compute(std::size_t pin)
{
    if (pin != 1)
        return nts::Undefined;
    return _value;
}

