/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** NorGate.hpp
*/

#ifndef NORGATE_HPP
    #define NORGATE_HPP0
    #include "../../AComponent/AComponent.hpp"

namespace nts {
    class NorGate : public AComponent {
        public:
            NorGate() = default;
            ~NorGate() override = default;

            nts::Tristate compute(std::size_t pin) override;

        private:
            nts::Tristate _state = nts::Undefined;
            bool _computing = false;
    };
}
#endif