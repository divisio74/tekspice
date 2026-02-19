/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** Logic.hpp
*/

#ifndef LOGIC_HPP
    #define LOGIC_HPP
    #include "../IComponent/IComponent.hpp"

namespace nts
{
    nts::Tristate andLogic(nts::Tristate a, nts::Tristate b);
    nts::Tristate orLogic(nts::Tristate a, nts::Tristate b);
    nts::Tristate xorLogic(nts::Tristate a, nts::Tristate b);
    nts::Tristate notLogic(nts::Tristate a);
}

#endif