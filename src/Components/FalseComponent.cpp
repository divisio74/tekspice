/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-False
** File description:
** False.hpp
*/

#include "../../include/Components/FalseComponent.hpp"

nts::Tristate nts::FalseComponent::compute(std::size_t pin)
{
    (void)pin;
    return _value;
}

