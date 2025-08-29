/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:56:30 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 14:40:18 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Operator.hpp"


Operator::Operator(char c) : c(c){
    std::cout << "Operator :" << c << std::endl;
}

Operator::~Operator(){}
