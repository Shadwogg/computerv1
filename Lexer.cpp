/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:50:07 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/29 19:15:12 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Lexer.hpp"

bool    is_operator(char x){
    return (x == '+' || x == '-' || x == '*' || x == '/' || x == '^');
}

bool	is_exponent(char x){
	return (x == '^');
}

bool    is_space(char x){
    return (x == ' ' || x == '\t');
}

bool    lexe_is_valid(std::string inp){
    char    c;
    size_t  i = 0;

    while (inp[i]){
        c = inp[i];
        if (!(isalnum(c) || c == '=' || c == '.' || is_operator(c) || is_space(c))){
            std::cout << c << std::endl;
            throw (ParsingError(INVALID_CHAR));
        }
        i++;
    }
    return (true);
}
