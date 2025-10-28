/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:56:30 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/28 13:35:39 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Operator.hpp"


Operator::Operator(char c) : op(c){
    std::cout << "Operator :" << c << std::endl;
    if ( (c != '+') && (c != '-') && (c != '*') && (c != '/') )
        throw (ParsingError(NOT_AN_OPERATOR));
}

Operator::Operator(Operator const &op){
    this->op = op.op;
}

Operator::~Operator(){}

// bool    Operator::is_sum(void){
//     return (this->op == '+' || this->op == '-');
    
// }
