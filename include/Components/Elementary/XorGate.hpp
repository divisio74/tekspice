/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** XorGate.hpp
*/

#ifndef XorGate_HPP
    #define XorGate_HPP
    #include "../../AComponent/AComponent.hpp"

namespace nts {
    class XorGate : public AComponent {
        public:
            XorGate() = default;
            ~XorGate() override = default;

            nts::Tristate compute(std::size_t pin) override;
    };
}
#endif
