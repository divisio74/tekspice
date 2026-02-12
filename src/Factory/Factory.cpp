/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Factory
** File description:
** Factory.cpp
*/

#include "../../include/Factory/Factory.hpp"

std::unique_ptr<nts::IComponent> nts::Factory::createComponent(const std::string &type)
{
    if (type == "input")
        return createInput();
    if (type == "output")
        return createOutput();
    if (type == "true")
        return createTrue();
    if (type == "false")
        return createFalse();
    if (type == "clock")
        return createClock();
    if (type == "and")
        return createAnd();
    if (type == "or")
        return createOr();
    if (type == "xor")
        return createXor();
    if (type == "not")
        return createNot();
    if (type == "4001")
        return create4001();
    if (type == "4011")
        return create4011();
    if (type == "4030")
        return create4030();
    if (type == "4069")
        return create4069();
    if (type == "4071")
        return create4071();
    if (type == "4081")
        return create4081();
    if (type == "4008")
        return create4008();
    if (type == "4013")
        return create4013();
    if (type == "4017")
        return create4017();
    if (type == "4040")
        return create4040();
    if (type == "4094")
        return create4094();
    if (type == "4512")
        return create4512();
    if (type == "4514")
        return create4514();
    if (type == "4801")
        return create4801();
    if (type == "2716")
        return create2716();
    if (type == "logger")
        return createLogger();
    throw std::invalid_argument("Unknown component type: " + type);
}

std::unique_ptr<nts::IComponent> nts::Factory::createInput() const
{
    return std::make_unique<Input>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createOutput() const
{
    return std::make_unique<Output>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createTrue() const
{
    return std::make_unique<TrueComponent>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createFalse() const
{
    return std::make_unique<FalseComponent>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createClock() const
{
    return std::make_unique<Clock>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createAnd() const
{
    return std::make_unique<AndGate>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createOr() const
{
    return std::make_unique<OrGate>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createXor() const
{
    return std::make_unique<XorGate>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createNot() const
{
    return std::make_unique<NotGate>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4001() const
{
    return std::make_unique<Gate4001>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4011() const
{
    return std::make_unique<Gate4011>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4030() const
{
    return std::make_unique<Gate4030>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4069() const
{
    return std::make_unique<Gate4069>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4071() const
{
    return std::make_unique<Gate4071>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4081() const
{
    return std::make_unique<Gate4081>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4008() const
{
    return std::make_unique<Gate4008>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4013() const
{
    return std::make_unique<Gate4013>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4017() const
{
    return std::make_unique<Gate4017>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4040() const
{
    return std::make_unique<Gate4040>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4094() const
{
    return std::make_unique<Gate4094>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4512() const
{
    return std::make_unique<Gate4512>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4514() const
{
    return std::make_unique<Gate4514>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create4801() const
{
    return std::make_unique<Gate4801>();
}

std::unique_ptr<nts::IComponent> nts::Factory::create2716() const
{
    return std::make_unique<Gate2716>();
}

std::unique_ptr<nts::IComponent> nts::Factory::createLogger() const
{
    return std::make_unique<Logger>();
}
