/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenizer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:55:04 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/25 17:16:30 by ggiboury         ###   ########.fr       */
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
	// std::cout << "Cleaned " << res << std::endl;
	return (res);
}

void	verify_uniq_litt(std::string inp){
	size_t i = 0;
	
	size_t pos = inp.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	std::cout << (pos == std::string::npos);
	
	if (pos == std::string::npos){
		std::cout << "No litteral found (where is the x ?)";
		throw (std::exception());
	}
	
	while (inp[i]){
		// std::cout << "Verif :" << pos << inp[i] << std::endl;
		if (isalpha(inp[i]) && inp[pos] != inp[i])
			throw(std::exception());
		i++;
	}
}

Operand	*extract_number(std::string const &inp, size_t start){
	// Int
	(void) inp;
	(void) start;
	//Real
	return (NULL);
}

std::list<Term> tokenify(std::string inp){
	size_t i = 0;
	inp = ft_clean_input(inp);
	
	verify_uniq_litt(inp); // Verify that we have at least 1 Unknown
	std::list<Term> tokens;
	std::cout << inp << std::endl;
    
    Operator    *op;

	while (inp[i]){
		//case Number
		if (isalnum(inp[i])){
			std::cout << "We one" << std::endl;
			Operand	*opd = extract_number(inp, i);
			(void) opd;
			i++;
			while (isalpha(inp[i]))
				i++;
			// Case operator
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
