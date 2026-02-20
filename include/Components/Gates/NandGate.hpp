/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** NandGate.hpp
*/

#ifndef NANDGATE_HPP
    #define NANDGATE_HPP
    #include "../../AComponent/AComponent.hpp"

namespace nts {
    class NandGate : public AComponent {
        public:
            NandGate() = default;
            ~NandGate() override = default;

            nts::Tristate compute(std::size_t pin) override;
    };
}
#endif