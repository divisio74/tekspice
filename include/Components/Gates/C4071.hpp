/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4071.hpp
*/

#ifndef C4071_HPP
    #define C4071_HPP
    #include "../../ACompositeComponent/ACompositeComponent.hpp"
    #include "../Elementary/OrGate.hpp"

namespace nts {
    class C4071 : public ACompositeComponent {
        public:
            C4071();
            ~C4071() override = default;
    };
}
#endif