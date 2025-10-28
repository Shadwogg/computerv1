/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingError.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:24:51 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/28 16:55:58 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ParsingError.hpp"

ParsingError::ParsingError(int err){
    this->msg = "Undefined";
    switch (err){
        case INVALID_CHAR:
            msg = "Invalid Char detected";
        break;

    }
}

ParsingError::ParsingError(int err, char x){
    this->msg = "Undefined";
    
    switch (err){
        case LACKING_CHAR:
            this->msg = "Missing character is ";
            this->msg.append(&x);
        break;
        case NOT_AN_OPERATOR:
            msg = "This ";
            this->msg.append(&x);
            this->msg.append(" is not an operator (+-/*)");
        break;
    }
}


ParsingError::~ParsingError(){

}

const char  *ParsingError::what(void) const throw(){
    // std::cout << this->msg.c_str() << std::endl;
    return (msg.c_str());
}
