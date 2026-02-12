/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Input
** File description:
** Input.hpp
*/

#ifndef INPUT_HPP
    #define INPUT_HPP

#include "../AComponent/AComponent.hpp"

namespace nts {

    class Input : public AComponent {
        public:
            Input() = default;
            ~Input() override = default;

            nts::Tristate compute(std::size_t pin) override;
            void setValue(nts::Tristate value);
        private:
            nts::Tristate _value = nts::Undefined;
    };
}

#endif
