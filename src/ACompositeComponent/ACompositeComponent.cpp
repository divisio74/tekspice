/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** ACompositeComponent.cpp
*/

#include "../../include/ACompositeComponent/ACompositeComponent.hpp"

nts::Tristate nts::ACompositeComponent::compute(std::size_t pin)
{
    auto it = _pinRoutes.find(pin);
    if (it == _pinRoutes.end())
        return nts::Undefined;
    return _internals.at(it->second.componentName)->compute(it->second.componentPin);
}

void nts::ACompositeComponent::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    auto it = _pinRoutes.find(pin);
    if (it == _pinRoutes.end())
        return;
    _internals.at(it->second.componentName)->setLink(it->second.componentPin, other, otherPin);
}

void nts::ACompositeComponent::addInternal(const std::string &name, std::unique_ptr<AComponent> component)
{
    _internals[name] = std::move(component);
}

void nts::ACompositeComponent::mapPin(std::size_t externalPin, const std::string &internalName, std::size_t internalPin)
{
    _pinRoutes[externalPin] = {internalName, internalPin};
}

void nts::ACompositeComponent::wireInternal(const std::string &fromComp, std::size_t fromPin,
                                             const std::string &toComp, std::size_t toPin)
{
    _internals.at(toComp)->setLink(toPin, *_internals.at(fromComp), fromPin);
}
