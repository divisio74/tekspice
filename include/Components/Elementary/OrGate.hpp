/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** OrGate.hpp
*/

#ifndef OrGate_HPP
    #define OrGate_HPP
    #include "../../AComponent/AComponent.hpp"

namespace nts {
    class OrGate : public AComponent {
        public:
            OrGate() = default;
            ~OrGate() override = default;

            nts::Tristate compute(std::size_t pin) override;
    };
}
#endif
