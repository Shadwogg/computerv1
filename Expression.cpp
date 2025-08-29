/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Expression.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:00:32 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 13:01:04 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Expression.hpp"

Expression::Expression(std::string inp){
    std::cout << "Working with " << inp << std::endl;
    std::string::iterator   it = inp.begin();
    std::string::iterator   ite = inp.end();
    
    while (it != ite){
        std::cout << "Parsing " << *it << std::endl;
        it++;
    }
}

Expression::~Expression(){}



int Expression::getDegree(void) const{
    return (this->degree);
}
