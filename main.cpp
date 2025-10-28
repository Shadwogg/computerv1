/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:02:21 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/28 11:25:06 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Lexer.hpp"
#include "Tokenizer.hpp"
#include "Resolver.hpp"
#include "Expression.hpp"
#include "ParsingError.hpp"

// bool	is_valid(std::string inp){
// 	return (!contains_multiple_letters(inp) && is_egal_valid(inp)
// 		&& all_valid_character(inp) /*&& all_numbers_are_valid(inp)*/);
// }

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
		
		if (inp.find('=') == inp.npos){
			throw (ParsingError(LACKING_CHAR, '='));
		}
		
		size_t	separator = inp.find('=');
	
		std::list<Term> left;
		std::list<Term> right;

		left = tokenify(inp.substr(0, separator));
		right = tokenify(inp.substr(separator + 1));
		
	} catch (ParsingError &e){
		std::cout << "Error message : " << e.what() <<std::endl;
	}
	
	
	// Expression *left = NULL;
	// Expression *right = NULL;
	
	// left = tokenify(inp.substr(0, separator));
	// if (left == NULL)
	// 	return (0);
	// right = tokenify(inp.substr(separator + 1));
	// if (right == NULL)
	// 	return (0);
	
	// is_syntax_valid(left);
	// is_syntax_valid(right);
	
	// Resolver::resolve(left, right);
}