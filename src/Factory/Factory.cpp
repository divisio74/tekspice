/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Factory
** File description:
** Factory.cpp
*/

#include "../../include/Factory/Factory.hpp"
#include "../../include/Components/Special/Input.hpp"
#include "../../include/Components/Special/Output.hpp"
#include "../../include/Components/Special/Clock.hpp"
#include "../../include/Components/Special/TrueComponent.hpp"
#include "../../include/Components/Special/FalseComponent.hpp"
#include "../../include/Components/Elementary/AndGate.hpp"
#include "../../include/Components/Elementary/OrGate.hpp"
#include "../../include/Components/Elementary/XorGate.hpp"
#include "../../include/Components/Elementary/NotGate.hpp"
#include "../../include/Components/Advanced/C4081.hpp"

std::unique_ptr<nts::IComponent> nts::Factory::createComponent(const std::string &type)
{
    if (type == "input")
        return createComponent<Input>();
    if (type == "output")
        return createComponent<Output>();
    if (type == "true")
        return createComponent<TrueComponent>();
    if (type == "false")
        return createComponent<FalseComponent>();
    if (type == "clock")
        return createComponent<Clock>();
    if (type == "and")
        return createComponent<AndGate>();
    if (type == "or")
        return createComponent<OrGate>();
    if (type == "xor")
        return createComponent<XorGate>();
    if (type == "not")
        return createComponent<NotGate>();
    if (type == "4081")
        return createComponent<C4081>();
    //if (type == "4001")
    //    return createComponent<Gate4001>();
    //if (type == "4011")
    //    return createComponent<Gate4011>();
    //if (type == "4030")
    //    return createComponent<Gate4030>();
    //if (type == "4069")
    //    return createComponent<Gate4069>();
    //if (type == "4071")
    //    return createComponent<Gate4071>();
    //if (type == "4081")
    //    return createComponent<Gate4081>();
    //if (type == "4008")
    //    return createComponent<Gate4008>();
    //if (type == "4013")
    //    return createComponent<Gate4013>();
    //if (type == "4017")
    //    return createComponent<Gate4017>();
    //if (type == "4040")
    //    return createComponent<Gate4040>();
    //if (type == "4094")
    //    return createComponent<Gate4094>();
    //if (type == "4512")
    //    return createComponent<Gate4512>();
    //if (type == "4514")
    //    return createComponent<Gate4514>();
    //if (type == "4801")
    //    return createComponent<Gate4801>();
    //if (type == "2716")
    //    return createComponent<Gate2716>();
    //if (type == "logger")
    //    return createComponent<Logger>();
    throw std::invalid_argument("Unknown component type: " + type);
}
