/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-AComponent
** File description:
** AComponent.cpp
*/

#include "../../include/AComponent/AComponent.hpp"

void nts::AComponent::simulate(std::size_t tick)
{
    (void)tick;
}

void nts::AComponent::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _links[pin] = {&other, otherPin};
}
