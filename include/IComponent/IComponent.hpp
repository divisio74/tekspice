/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-nanotekspice-10
** File description:
** IComponent.hpp
*/

#ifndef ICOMPONENT_HPP
    #define ICOMPONENT_HPP

#include <vector>

namespace nts
{
    enum Tristate {
        Undefined = ( - true ) ,
        True = true ,
        False = false
    };
    class IComponent
    {
        public :
            virtual ~ IComponent () = default ;
            virtual void simulate ( std :: size_t tick ) = 0;
            virtual nts :: Tristate compute (std :: size_t pin ) = 0;
            virtual void setLink (std :: size_t pin , nts :: IComponent &other , std :: size_t
            otherPin ) = 0;
    };
}

#endif
