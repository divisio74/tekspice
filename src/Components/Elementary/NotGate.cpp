/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** NotGate.cpp
*/

#include "../../../include/Components/Elementary/NotGate.hpp"
#include "../../../include/Components/Logic.hpp"

nts::Tristate nts::NotGate::compute(std::size_t pin)
{
    if (pin != 2)
        return nts::Undefined;
    nts::Tristate a = getLinkValue(1);
    return notLogic(a);
}
