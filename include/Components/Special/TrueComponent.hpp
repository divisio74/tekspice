/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-True
** File description:
** True.hpp
*/

#ifndef TRUE_HPP
    #define TRUE_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {

    class TrueComponent : public AComponent {
        public:
            TrueComponent() = default;
            ~TrueComponent() override = default;

            nts::Tristate compute(std::size_t pin) override;
        private:
            nts::Tristate _value = nts::True;
    };
}

#endif
