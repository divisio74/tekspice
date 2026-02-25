/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4008.hpp
*/


#ifndef C4008_HPP
    #define C4008_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C4008 : public AComponent {
    public:
        C4008() = default;
        ~C4008() override = default;
        nts::Tristate compute(std::size_t pin) override;
    };
}
#endif
