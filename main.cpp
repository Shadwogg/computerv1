/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:02:21 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/29 18:26:41 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Lexer.hpp"
#include "Tokenizer.hpp"
#include "Resolver.hpp"
#include "Expression.hpp"
#include "ParsingError.hpp"

void	verify_uniq_litt(std::string inp){
	size_t i = 0;
	
	size_t pos = inp.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	// std::cout << (pos == std::string::npos);
	
	if (pos == std::string::npos){
		throw (ParsingError(NO_LITTERAL));
	}
	
	while (inp[i]){
		if (isalpha(inp[i]) && inp[pos] != inp[i])
			throw(ParsingError(MULTIPLE_LITTERAL));
		i++;
	}
}

int	main(int argc, char **argv){
	
	if (argc > 2){
		std::cout << "Too many args." << std::endl;
		return 0;
	}
	
	std::string inp;
	if (argc == 1) {
		std::cout << "Enter your equation :" << std::endl;
		std::getline(std::cin, inp);
	} else {
		inp = argv[1];
	}
	
	try {
		lexe_is_valid(inp);
		
		size_t	separator = inp.find('=');
		if (separator == inp.npos){
			throw (ParsingError(LACKING_CHAR, '='));
		}
		
		verify_uniq_litt(inp); // Verify that we have at least 1 Unknown
		
		std::list<Term> left;
		std::list<Term> right;

		left = tokenify(inp.substr(0, separator));
		right = tokenify(inp.substr(separator + 1));
		
		// Resolver::resolve(left, right);
	} catch (ParsingError &e){
		std::cout << "Error occured : " << std::endl << e.what() <<std::endl;
	}
	
	
}