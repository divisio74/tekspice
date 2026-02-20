/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** ACompositeComponent.hpp
*/

#ifndef C4081_HPP
    #define C4081_HPP

    #include "../../ACompositeComponent/ACompositeComponent.hpp"
    #include "../Elementary/AndGate.hpp"

namespace nts {
    class C4081 : public ACompositeComponent {
        public:
            C4081();
            ~C4081() override = default;
    };
}
#endif
