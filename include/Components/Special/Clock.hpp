/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Clock
** File description:
** Clock.hpp
*/

#ifndef CLOCK_HPP
    #define CLOCK_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {

    class Clock : public AComponent {
        public:
            Clock() = default;
            ~Clock() override = default;

            nts::Tristate compute(std::size_t pin) override;
            void simulate(std::size_t tick) override;
            void setValue(nts::Tristate value) override;
        private:
            nts::Tristate _value = nts::Undefined;
            nts::Tristate _nextValue = nts::Undefined;
    };
}

#endif
