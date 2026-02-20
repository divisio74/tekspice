/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4069.hpp
*/

#ifndef C4069_HPP
    #define C4069_HPP
    #include "../../ACompositeComponent/ACompositeComponent.hpp"
    #include "../Elementary/NotGate.hpp"

namespace nts {
    class C4069 : public ACompositeComponent {
        public:
            C4069();
            ~C4069() override = default;
    };
}
#endif