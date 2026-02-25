/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C2716.hpp
*/

#ifndef C2716_HPP
    #define C2716_HPP

#include "../../AComponent/AComponent.hpp"

namespace nts {
    class C2716 : public AComponent {
    public:
        C2716();
        ~C2716() override = default;
        nts::Tristate compute(std::size_t pin) override;
    private:
        int _memory[2048] = {};
        bool _loaded = false;
    };
}
#endif
