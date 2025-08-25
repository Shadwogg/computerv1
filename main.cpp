/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:02:21 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/25 18:09:07 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "tests.hpp"
#include <string>
#include <>

bool	tests(std::string inp){
	return (!contains_multiple_letters(inp) && !is_egal_valid(inp) && all_valid_character(inp));
}

char	*trim_spaces(std::string s){
	int		i = 0, ct = 0;
	
	while (s[i]){
		if (isspace(s[i]))
			ct++;
		i++;
	}
	res = malloc((i - ct + 1) * sizeof (char));
	res[i - ct] = 0;
	i = 0;
	ct = 0;
	while (s[i] && res[i]){
		if (isspace(s[i]))
			ct++;
		else
			res[i] = s[i - ct];
		i++;
	}
	return (res);
}

void	parse(std::string inp){
	if (inp == 0 || *inp == 0)
		return ;
	std::cout << "input is :" << inp << std::endl;
	trim_spaces(inp);
	if (tests(inp))
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