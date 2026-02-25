/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4512.hpp
*/

#ifndef C4512_HPP
    #define C4512_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C4512 : public AComponent {
    public:
        C4512() = default;
        ~C4512() override = default;
        nts::Tristate compute(std::size_t pin) override;
    };
}
#endif
