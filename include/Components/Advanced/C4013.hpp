/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4013.hpp
*/

#ifndef C4013_HPP
    #define C4013_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C4013 : public AComponent {
    public:
        C4013() = default;
        ~C4013() override = default;
        nts::Tristate compute(std::size_t pin) override;
        void simulate(std::size_t tick) override;
    private:
        nts::Tristate _q1       = nts::Undefined;
        nts::Tristate _q2       = nts::Undefined;
        nts::Tristate _prevClk1 = nts::False;
        nts::Tristate _prevClk2 = nts::False;
    };
}
#endif
