/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Output
** File description:
** Output.hpp
*/

#include "../../../include/Components/Special/Output.hpp"

nts::Tristate nts::Output::compute(std::size_t pin)
{
    if (pin != 1)
        return nts::Undefined;
    return getLinkValue(1);
}

