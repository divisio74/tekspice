/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-False
** File description:
** False.hpp
*/

#ifndef FALSE_HPP
    #define FALSE_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {

    class FalseComponent : public AComponent {
        public:
            FalseComponent() = default;
            ~FalseComponent() override = default;

            nts::Tristate compute(std::size_t pin) override;
        private:
            nts::Tristate _value = nts::False;
    };
}

#endif
