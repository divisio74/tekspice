/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** Logger.cpp
*/

#include "../../../include/Components/Special/Logger.hpp"

void nts::Logger::simulate(std::size_t tick)
{
    (void)tick;

    nts::Tristate clk = getLinkValue(9);
    nts::Tristate inh = getLinkValue(10);
    nts::Tristate d0 = getLinkValue(1);
    nts::Tristate d1 = getLinkValue(2);
    nts::Tristate d2 = getLinkValue(3);
    nts::Tristate d3 = getLinkValue(4);
    nts::Tristate d4 = getLinkValue(5);
    nts::Tristate d5 = getLinkValue(6);
    nts::Tristate d6 = getLinkValue(7);
    nts::Tristate d7 = getLinkValue(8);

    if (_prevClk == False && clk == True && inh != True) {

        std::ofstream file("./log.bin", std::ios::binary | std::ios::app);

        if (d0 == Undefined || d1 == Undefined || d2 == Undefined || d3 == Undefined ||
            d4 == Undefined || d5 == Undefined || d6 == Undefined || d7 == Undefined) {
            _prevClk = clk;
            return;
        }

        int byte = (d0 == True) | ((d1 == True) << 1) |
            ((d2 == True) << 2) | ((d3 == True) << 3) |
            ((d4 == True) << 4) | ((d5 == True) << 5) |
            ((d6 == True) << 6) | ((d7 == True) << 7);

        if (file.is_open()) {
            char c = static_cast<char>(byte);
            file.write(&c, 1);
        }
    }
    _prevClk = clk;
}

nts::Tristate nts::Logger::compute(std::size_t pin)
{
    return getLinkValue(pin);
}
