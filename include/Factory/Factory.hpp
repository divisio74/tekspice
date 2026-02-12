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

            std::unique_ptr<IComponent> createComponent(const std::string &type);

        private:
            std::unique_ptr<IComponent> createInput() const;
            std::unique_ptr<IComponent> createOutput() const;
            std::unique_ptr<IComponent> createTrue() const;
            std::unique_ptr<IComponent> createFalse() const;
            std::unique_ptr<IComponent> createClock() const;
            std::unique_ptr<IComponent> createAnd() const;
            std::unique_ptr<IComponent> createOr() const;
            std::unique_ptr<IComponent> createXor() const;
            std::unique_ptr<IComponent> createNot() const;
            std::unique_ptr<IComponent> create4001() const;
            std::unique_ptr<IComponent> create4011() const;
            std::unique_ptr<IComponent> create4030() const;
            std::unique_ptr<IComponent> create4069() const;
            std::unique_ptr<IComponent> create4071() const;
            std::unique_ptr<IComponent> create4081() const;
            std::unique_ptr<IComponent> create4008() const;
            std::unique_ptr<IComponent> create4013() const;
            std::unique_ptr<IComponent> create4017() const;
            std::unique_ptr<IComponent> create4040() const;
            std::unique_ptr<IComponent> create4094() const;
            std::unique_ptr<IComponent> create4512() const;
            std::unique_ptr<IComponent> create4514() const;
            std::unique_ptr<IComponent> create4801() const;
            std::unique_ptr<IComponent> create2716() const;
            std::unique_ptr<IComponent> createLogger() const;
    };
}

#endif
