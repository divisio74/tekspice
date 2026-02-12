/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Output
** File description:
** Output.hpp
*/

#ifndef OUTPUT_HPP
    #define OUTPUT_HPP

#include "../AComponent/AComponent.hpp"

namespace nts {

    class Output : public AComponent {
        public:
            Output() = default;
            ~Output() override = default;

            nts::Tristate compute(std::size_t pin) override;
        private:
            nts::Tristate _value = nts::Undefined;
    };
}

#endif
