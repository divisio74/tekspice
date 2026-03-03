/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4017.hpp
*/

#ifndef C4017_HPP
    #define C4017_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C4017 : public AComponent {
    public:
        C4017() = default;
        ~C4017() override = default;
        nts::Tristate compute(std::size_t pin) override;
        void simulate(std::size_t tick) override;
    private:
        int _count = 0;
        nts::Tristate _prevClk = nts::False;
    };
}
#endif
