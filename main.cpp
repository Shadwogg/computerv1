/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:02:21 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 15:17:18 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "tests.hpp"
#include "Resolver.hpp"
#include "Expression.hpp"

bool	is_valid(std::string inp){
	return (!contains_multiple_letters(inp) && is_egal_valid(inp)
		&& all_valid_character(inp) && all_numbers_are_valid(inp));
}

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

void	parse(std::string inp, Expression **left, Expression **right){
	std::cout << "input is :" << inp << std::endl;
	inp = ft_clean_input(inp);
	if (!is_valid(inp))
		return ;
	*left = new Expression(inp.substr(0, inp.find('=')));
	*right = new Expression(inp.substr(inp.find('=') + 1));
}

int	main(int argc, char **argv){
	if (argc > 2){
		std::cout << "Too many args." << std::endl;
		return 0;
	}
	if (argc == 1) {
		std::cout << "Not enough arguments" << std::endl;
		return (0);
	}
	
	Expression *left = NULL;
	Expression *right = NULL;
	
	parse(argv[1], &left, &right);
	if (left == NULL || right == NULL)
		return (0);
	Resolver::resolve(left, right);
}