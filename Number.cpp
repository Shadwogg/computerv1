/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:29:25 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/31 13:36:53 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

Number::Number(unsigned int x){
    _integer = x;
    _is_real = false;
}

Number::Number(double f){
    _real = f;
    _is_real = true;
}

Number::~Number(void){
    
}

Number const    &Number::operator=(Number const &rhs){
    if (this == &rhs)
        return (*this);
    return (*this);
}

const char      *Number::toString(void) const
{
    // std::stringstream out;
    // out << (this->isReal() ? _real : _integer);
    
    return (this->number);
}

bool    Number::isReal(void) const{
    return (_is_real);
}