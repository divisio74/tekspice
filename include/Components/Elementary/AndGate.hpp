/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** AndGate.hpp
*/

#ifndef AndGate_HPP
    #define AndGate_HPP
    #include "../../AComponent/AComponent.hpp"

namespace nts {
    class AndGate : public AComponent {
        public:
            AndGate() = default;
            ~AndGate() override = default;

            nts::Tristate compute(std::size_t pin) override;
    };
}

#endif
