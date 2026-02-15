/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Circuit
** File description:
** Circuit.cpp
*/

#include "../../include/Circuit/Circuit.hpp"
#include <iostream>



void nts::Circuit::simulate(std::size_t tick) {
    _tick = tick;
    for (auto &[name, component] : _components)
        component->simulate(tick);
}

nts::Tristate nts::Circuit::compute(std::size_t pin)
{
    (void)pin;
    return nts::Undefined;
}

void nts::Circuit::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    (void)pin;
    (void)other;
    (void)otherPin;
}

void nts::Circuit::addComponent(const std::string &name, std::unique_ptr<IComponent> component, const std::string &type)
{
    if (_components.find(name) != _components.end())
        throw std::invalid_argument("Several components share the same name: " + name);
    if (type == "output")
        _outputs[name] = component.get();
    if (type == "input" || type == "clock")
        _inputs[name] = static_cast<nts::AComponent *>(component.get());
    _components[name] = std::move(component);
}
nts::IComponent &nts::Circuit::getComponent(const std::string &name) const
{
    if (_components.find(name) == _components.end())
        throw std::invalid_argument("Unknown component name: " + name);
    return *_components.at(name);
}

void nts::Circuit::display() const
{
    for (auto &[name, out] : _outputs)
        std::cout << name << ": " << out->compute(1) << std::endl;
}

bool nts::Circuit::isempty() const
{
    if (this->_components.empty())
        return true;
    return false;
}

void nts::Circuit::setInputValue(const std::string &name, nts::Tristate value)
{
    if (_inputs.find(name) == _inputs.end())
        throw std::invalid_argument("Unknown input: " + name);
    _inputs[name]->setValue(value);
}
