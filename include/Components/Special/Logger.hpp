/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** Logger.hpp
*/

#ifndef LOGGER_HPP
    #define LOGGER_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class Logger : public AComponent {
    public:
        Logger() = default;
        ~Logger() override = default;
        nts::Tristate compute(std::size_t pin) override;
        void simulate(std::size_t tick) override;
    private:
        nts::Tristate _prevClk = nts::Undefined;
    };
}
#endif
