/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:56:30 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 12:54:38 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Operator.hpp"


Operator::Operator(char c) : Symbol(c){
    std::cout << "Hey" << std::endl;
}

Operator::~Operator(){}
