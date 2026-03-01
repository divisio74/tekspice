/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** ACompositeComponent.hpp
*/

#ifndef ACOMPOSITECOMPONENT_HPP
    #define ACOMPOSITECOMPONENT_HPP

    #include "../AComponent/AComponent.hpp"
    #include <map>
    #include <vector>
    #include <string>
    #include <memory>

namespace nts {
    class ACompositeComponent : public AComponent {
        public:
            ACompositeComponent() = default;
            ~ACompositeComponent() override = default;
            nts::Tristate compute(std::size_t pin) override;
            void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;

        protected:
            struct PinRoute {
                std::string componentName;
                std::size_t componentPin;
            };
            void addInternal(const std::string &name, std::unique_ptr<AComponent> component);
            void mapPin(std::size_t externalPin, const std::string &internalName,
                std::size_t internalPin);
            std::map<std::string, std::unique_ptr<AComponent>> _internals;
            std::vector<std::pair<std::size_t, PinRoute>> _pinRoutes;
    };
}
#endif
