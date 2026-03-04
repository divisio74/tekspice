/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4514.hpp
*/

#ifndef C4514_HPP
    #define C4514_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C4514 : public AComponent {
    public:
        C4514() = default;
        ~C4514() override = default;
        nts::Tristate compute(std::size_t pin) override;
        void simulate(std::size_t tick) override;
    };
}
#endif
