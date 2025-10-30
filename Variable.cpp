/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Variable.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:02:04 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 10:15:11 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Variable.hpp"

Variable::Variable(char x): _name(x){
}

Variable::~Variable(void){
}

Variable const    &Variable::operator=(Variable const &rhs){
    if (&rhs == this)
        return (*this);
    
    return (*this);
}


const char *Variable::toString(void) const{
    return (&this->_name);
}
