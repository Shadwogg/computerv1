/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:29:25 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 12:04:50 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

Number::Number(unsigned int x){
    _integer = x;
}

Number::Number(double f){
    _real = f;
}

Number::~Number(void){
    
}

Number const    &Number::operator=(Number const &rhs){
    if (this == &rhs)
        return (*this);
    return (*this);
}

const char      *Number::toString(void) const{
    return ("number");
}

bool    Number::isDouble(void) const{
    return (_real != 0);
}