/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4040.hpp
*/

#ifndef C4040_HPP
    #define C4040_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C4040 : public AComponent {
    public:
        C4040() = default;
        ~C4040() override = default;
        nts::Tristate compute(std::size_t pin) override;
        void simulate(std::size_t tick) override;
    private:
        int _count = 0;
        nts::Tristate _prevClk = nts::False;
    };
}
#endif
