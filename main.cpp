/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:02:21 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/19 11:44:56 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Lexer.hpp"
#include "Resolver.hpp"
#include "Expression.hpp"

// bool	is_valid(std::string inp){
// 	return (!contains_multiple_letters(inp) && is_egal_valid(inp)
// 		&& all_valid_character(inp) /*&& all_numbers_are_valid(inp)*/);
// }

std::string	ft_clean_input(std::string inp){
	std::string	res;
	int	i = 0;

	while (inp[i]){
		if (!isspace(inp[i]))
			res.append(1, inp[i]);
		i++;
	}
	std::cout << "CLEANed " << res << std::endl;
	return (res);
}


Expression	*tokenify(std::string inp){
	size_t i = 0;
	inp = ft_clean_input(inp);
	
	while (inp[i]){
		i++;
	}
	return (NULL);
}

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
	right = tokenify(inp.substr(separator + 1));
	
	// is_syntax_valid(left);
	// is_syntax_valid(right);
	
	// Resolver::resolve(left, right);
}