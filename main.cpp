/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:02:21 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/21 00:00:27 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Lexer.hpp"
#include "Tokenizer.hpp"
#include "Resolver.hpp"
#include "Expression.hpp"

// bool	is_valid(std::string inp){
// 	return (!contains_multiple_letters(inp) && is_egal_valid(inp)
// 		&& all_valid_character(inp) /*&& all_numbers_are_valid(inp)*/);
// }

int	main(int argc, char **argv){
	if (argc > 2){
		std::cout << "Too many args." << std::endl;
		return 0;
	}

	if (argc == 1) {
		std::cout << "Todo : Read on stdin" << std::endl;
		return (0);
	}	
	
	if (!lexe_is_valid(argv[1])){
		std::cout << "Invalid character" << std::endl;
		return (0);
	}
	std::string inp = argv[1];
	
	Expression *left = NULL;
	Expression *right = NULL;
	size_t	separator = inp.find('=');
	left = tokenify(inp.substr(0, separator));
	if (left == NULL)
		return (0);
	right = tokenify(inp.substr(separator + 1));
	if (right == NULL)
		return (0);
	
	// is_syntax_valid(left);
	// is_syntax_valid(right);
	
	// Resolver::resolve(left, right);
}