/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-Parser
** File description:
** Parser.hpp
*/

#ifndef PARSER_HPP
    #define PARSER_HPP

#include "../Circuit/Circuit.hpp"

namespace nts {

    class Parser {
        public:
            Parser(const std::string &filename);
            ~Parser();
            Circuit parse();
        private:
            void parsechipset(Circuit &);
            void parselinks(Circuit &);
            std::ifstream _file;
    };
}
#endif
