/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Term.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:44:14 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/25 16:16:15 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Term.hpp"

Term::Term(std::string inp){
    std::cout << this->opd << this->op << std::endl;
    std::cout << inp << std::endl;    
}

Term::~Term(){}
