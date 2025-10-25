/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenizer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:55:04 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/25 15:16:21 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tokenizer.hpp"

std::string	ft_clean_input(std::string inp){
	std::string	res;
	int	i = 0;

	while (inp[i]){
		if (!isspace(inp[i]))
			res.append(1, inp[i]);
		i++;
	}
	std::cout << "Cleaned " << res << std::endl;
	return (res);
}

std::list<Term> tokenify(std::string inp){
	size_t i = 0;
	inp = ft_clean_input(inp);
	std::list<Term> tokens;
	std::cout << inp << std::endl;
    
    Operator    *op;

	while (inp[i]){
		//case Number
		if (isalnum(inp[i])){
			std::cout << "We are number one" << std::endl;
			i++;
		} else if (is_operator(inp[i])){
			std::cout << "Operatordation" << std::endl;
            op = new Operator(inp[i]);
			i++;
		} else {
			std::cout << "Error, unrecognized token" << std::endl;
			throw (std::exception());
		}
	}
	return (tokens);
}
