/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:02:21 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/24 16:48:42 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "tests.hpp"

bool	tests(char *inp){
	return (contains_multiple_letters(inp));
}

void	parse(char *inp){
	if (inp == 0 || *inp == 0)
		return ;
	std::cout << "input is :" << inp << std::endl;
	if (!tests(inp))
		return ;
}

int	main(int argc, char **argv){
	if (argc > 2){
		std::cout << "Too many args." << std::endl;
		return 0;
	}
	if (argc == 1) {
		std::cout << std::endl;
	}
	parse(argv[1]);
}