/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4094.hpp
*/

#ifndef C4094_HPP
    #define C4094_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C4094 : public AComponent {
    public:
        C4094() = default;
        ~C4094() override = default;
        nts::Tristate compute(std::size_t pin) override;
        void simulate(std::size_t tick) override;
    private:
        nts::Tristate _shift[8] = {
            nts::False, nts::False, nts::False, nts::False,
            nts::False, nts::False, nts::False, nts::False
        };
        nts::Tristate _latch[8] = {
            nts::False, nts::False, nts::False, nts::False,
            nts::False, nts::False, nts::False, nts::False
        };
        nts::Tristate _prevClk = nts::False;
        nts::Tristate _qs2 = nts::False;
    };
}
#endif
