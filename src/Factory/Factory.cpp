/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Factory
** File description:
** Factory.cpp
*/

#include "../../include/Factory/Factory.hpp"

std::unique_ptr<nts::IComponent> nts::Factory::createcompo(std::string type)
{
    if (type == "input")
        return std::make_unique<Input>();
    if (type == "output")
        return std::make_unique<Output>();
    if (type == "true")
        return std::make_unique<TrueComponent>();
    if (type == "false")
        return std::make_unique<FalseComponent>();
    if (type == "clock")
        return std::make_unique<Clock>();

    if (type == "and")
        return std::make_unique<AndGate>();
    if (type == "or")
        return std::make_unique<OrGate>();
    if (type == "xor")
        return std::make_unique<XorGate>();
    if (type == "not")
        return std::make_unique<NotGate>();

    if (type == "4001")
        return std::make_unique<Gate4001>();
    if (type == "4011")
        return std::make_unique<Gate4011>();
    if (type == "4030")
        return std::make_unique<Gate4030>();
    if (type == "4069")
        return std::make_unique<Gate4069>();
    if (type == "4071")
        return std::make_unique<Gate4071>();
    if (type == "4081")
        return std::make_unique<Gate4081>();

    if (type == "4008")
        return std::make_unique<Gate4008>();
    if (type == "4013")
        return std::make_unique<Gate4013>();
    if (type == "4017")
        return std::make_unique<Gate4017>();
    if (type == "4040")
        return std::make_unique<Gate4040>();
    if (type == "4094")
        return std::make_unique<Gate4094>();
    if (type == "4512")
        return std::make_unique<Gate4512>();
    if (type == "4514")
        return std::make_unique<Gate4514>();
    if (type == "4801")
        return std::make_unique<Gate4801>();
    if (type == "2716")
        return std::make_unique<Gate2716>();

    if (type == "logger")
        return std::make_unique<Logger>();
    throw std::invalid_argument("Unknown component type: " + type);
}
