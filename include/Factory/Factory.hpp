/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Factory
** File description:
** Factory.hpp
*/

#ifndef FACTORY_HPP
    #define FACTORY_HPP

#include "../IComponent/IComponent.hpp"

namespace nts {

    class Factory {
        public:
            Factory() = default;
            ~Factory() = default;

            std::unique_ptr<IComponent> createcompo(std::string);
    };
}

#endif
