/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** Logic.cpp
*/

#include "../../include/Components/Logic.hpp"

nts::Tristate nts::andLogic(Tristate a, Tristate b)
{
    if (a == False || b == False)
        return False;
    if (a == Undefined || b == Undefined)
        return Undefined;
    return True;
}

nts::Tristate nts::orLogic(Tristate a, Tristate b)
{
    if (a == True || b == True)
        return True;
    if (a == Undefined || b == Undefined)
        return Undefined;
    return False;
}

nts::Tristate nts::xorLogic(Tristate a, Tristate b)
{
    if (a == Undefined || b == Undefined)
        return Undefined;
    if (a != b)
        return True;
    return False;
}

nts::Tristate nts::notLogic(Tristate a)
{
    if (a == Undefined)
        return Undefined;
    if (a == True)
        return False;
    return True;
}
