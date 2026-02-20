/*
** EPITECH PROJECT, 2025
** G-OOP-400-LYN-4-1-tekspice-17
** File description:
** C4001.hpp
*/

#ifndef C4001_HPP
    #define C4001_HPP
    #include "../../ACompositeComponent/ACompositeComponent.hpp"
    #include "NorGate.hpp"

namespace nts {
    class C4001 : public ACompositeComponent {
        public:
            C4001();
            ~C4001() override = default;
    };
}
#endif