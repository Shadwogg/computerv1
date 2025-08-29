/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Expression.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:00:32 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 13:15:22 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Expression.hpp"

bool    isOperator(char c){
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

bool    isOperand(char c){
    return (c == '.' || isalnum(c));
}

Expression::Expression(std::string inp){
    std::cout << "Working with " << inp << std::endl;
    std::string::iterator   it = inp.begin();
    std::string::iterator   ite = inp.end();
    
    while (it != ite){
        // std::cout << "Parsing " << *it << std::endl;
        if (isOperator(*it)){
            this->symbols.push_back(Operator(*it));
            it++;
        } else {
            std::string number;
            while (it != ite && isOperand(*it)){
                number.push_back(*it);
                it++;
            }
        }
    }
}

Expression::~Expression(){}



int Expression::getDegree(void) const{
    return (this->degree);
}
