/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** ACompositeComponent.cpp
*/

#include "../../include/ACompositeComponent/ACompositeComponent.hpp"

nts::Tristate nts::ACompositeComponent::compute(std::size_t pin)
{
    std::size_t len = _pinRoutes.size();

    for (std::size_t i = 0; i < len; i++) {
        if (_pinRoutes[i].first == pin)
            return _internals.at(_pinRoutes[i].second.componentName)->compute(_pinRoutes[i].second.componentPin);
    }
    return nts::Undefined;
}

void nts::ACompositeComponent::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    std::size_t len = _pinRoutes.size();

    for (std::size_t i = 0; i < len; i++) {
        if (_pinRoutes[i].first == pin) {
            _internals.at(_pinRoutes[i].second.componentName)->setLink(_pinRoutes[i].second.componentPin, other, otherPin);
            return;
        }
    }
}

void nts::ACompositeComponent::addInternal(const std::string &name, std::unique_ptr<AComponent> component)
{
    _internals[name] = std::move(component);
}

void nts::ACompositeComponent::mapPin(std::size_t externalPin, const std::string &internalName, std::size_t internalPin)
{
    _pinRoutes.push_back({externalPin, {internalName, internalPin}});
}
