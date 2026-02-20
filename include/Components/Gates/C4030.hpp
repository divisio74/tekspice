/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4030.hpp
*/

#ifndef C4030_HPP
    #define C4030_HPP
    #include "../../ACompositeComponent/ACompositeComponent.hpp"
    #include "../Elementary/XorGate.hpp"

namespace nts {
    class C4030 : public ACompositeComponent {
        public:
            C4030();
            ~C4030() override = default;
    };
}
#endif