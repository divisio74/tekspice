/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-nanotekspice-10
** File description:
** VM.hpp
*/

#ifndef VM_HPP
    #define VM_HPP

#include "../Parser/Parser.hpp"

namespace nts {

    class VM {
        public:
            VM(const std::string &filename);
            void run();

        private:
            Circuit _circuit;

            void cmdSimulate();
            void cmdLoop();
            void cmdSet(const std::string &line);
    };
}

#endif
