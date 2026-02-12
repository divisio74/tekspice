/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Output
** File description:
** Output.hpp
*/

#include "../include/Components/Output.hpp"

nts::Tristate nts::Output::compute(std::size_t pin)
{
    return _links[1].first->compute(_links[1].second);
}

