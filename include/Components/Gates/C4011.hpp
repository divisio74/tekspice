/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4011.hpp
*/

#ifndef C4011_HPP
    #define C4011_HPP
    #include "../../ACompositeComponent/ACompositeComponent.hpp"
    #include "NandGate.hpp"

namespace nts {
    class C4011 : public ACompositeComponent {
        public:
            C4011();
            ~C4011() override = default;
    };
}
#endif