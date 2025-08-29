/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operand.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 14:09:29 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 15:07:48 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Operand.hpp"

Operand::Operand(std::string str) {
    std::cout << "Operand :" << str << std::endl;
    if (str.find('.') == std::string::npos){
        this->reel = std::atof(str.c_str());
    } else {
        this->integer = std::atoi(str.c_str());
    }
}

Operand::Operand(char c){
    this->c = c;
}


Operand::~Operand(){}
