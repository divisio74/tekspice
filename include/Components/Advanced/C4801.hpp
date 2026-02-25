/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4801.hpp
*/

#ifndef C4801_HPP
    #define C4801_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C4801 : public AComponent {
    public:
        C4801() = default;
        ~C4801() override = default;
        nts::Tristate compute(std::size_t pin) override;
        void simulate(std::size_t tick) override;
    private:
        int _memory[1024] = {};
        bool _initialized[1024] = {};
    };
}
#endif
