/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenizer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:55:04 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/28 14:57:29 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tokenizer.hpp"


/**
 * @brief Returns a copy of the input without spaces.
 * 
 * @param inp
 * @return std::string 
 */
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
	// std::cout << (pos == std::string::npos);
	
	if (pos == std::string::npos){
		throw (ParsingError(NO_LITTERAL));
	}
	
	// while (inp[i]){ TO DO
	// 	// std::cout << "Verif :" << pos << inp[i] << std::endl;
	// 	if (isalpha(inp[i]) && inp[pos] != inp[i])
	// 		throw(ParsingError(0));
	// 	i++;
	// }
}

Operand	*extract_number(std::string const &inp, size_t start){
	// Int
	(void) inp;
	(void) start;
	//Real
	return (NULL);
}

/**
 * @brief create a list of Term by analysing the input
 * 
 * @param inp 
 * @return std::list<Term> 
 */
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
			throw (ParsingError(UNEXPECTED_ERROR));
		}
	}
	return (tokens);
}
