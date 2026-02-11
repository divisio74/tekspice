/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-AComponent
** File description:
** AComponent.hpp
*/

#ifndef ACOMPONENT_HPP
    #define ACOMPONENT_HPP

#include "../IComponent/IComponent.hpp"

namespace nts {

    class AComponent : public IComponent {
        public:
            AComponent() = default;
            ~AComponent() override = default;

            void simulate(std::size_t tick) override;
            nts::Tristate compute(std::size_t pin) override = 0;
            void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;

        protected:
            std::map<std::size_t, std::pair<IComponent*, std::size_t>> _links;
    };
}

#endif
