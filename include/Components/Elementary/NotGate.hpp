/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** NotGate.hpp
*/

#ifndef NotGate_HPP
    #define NotGate_HPP
    #include "../../AComponent/AComponent.hpp"

namespace nts {
    class NotGate : public AComponent {
        public:
            NotGate() = default;
            ~NotGate() override = default;

            nts::Tristate compute(std::size_t pin) override;
    };
}
#endif
