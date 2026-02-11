/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Circuit
** File description:
** Circuit.hpp
*/

#ifndef CIRCUIT_HPP
    #define CIRCUIT_HPP

#include "../IComponent/IComponent.hpp"

namespace nts {

    class Circuit : public IComponent {
        public:
            Circuit() = default;
            ~Circuit() override = default;

            void simulate(std::size_t tick) override;
            nts::Tristate compute(std::size_t pin) override;
            void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;

            void addComponent(const std::string &name, std::unique_ptr<IComponent> component);
            IComponent &getComponent(const std::string &name) const;
            void display() const;

        private:
            std::map<std::string, std::unique_ptr<IComponent>> _components;
            std::size_t _tick = 0;
    };
}

#endif
