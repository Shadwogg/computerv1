/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:50:07 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/20 23:57:40 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Lexer.hpp"

bool    is_operator(char x){
    return (x == '+' || x == '-' || x == '*' || x == '/');
}

bool	is_exponent(char x){
	return (x == '^');
}

bool    lexe_is_valid(std::string inp){
    char    c;
    size_t  i = 0;

    while (inp[i]){
        c = inp[i];
        if (!(isalnum(c) || c == '=' || c == '.' || is_operator(c) || is_exponent(c) || c == ' ')){
            std::cout << c << std::endl;
            return (false);
        }
        i++;
    }
    return (true);
}

/*
#include <cctype>

bool    contains_multiple_letters(std::string inp){
    int i = 0, j = 0;
    while (inp[i] != 0){
        j = i + 1;
        while (inp[j] != 0){
            if (std::isalpha(inp[i]) && std::isalpha(inp[j]) && inp[i] != inp[j]){
                std::cout << "Parse error : multiple unknown" << std::endl;
                return (true);
            }
            j++;
        }
        i++;
    }
    return (false);
}

bool    is_egal_valid(std::string inp){
    unsigned int    ct = 0, i = 0;
    while (inp[i]){
        if (inp[i] == '=')
            ct++;
        i++;
    }
    if (ct < 1){
        std::cout << "Parse error : No '=' found." << std::endl;
        return (false);
    } else if (ct > 1){
        std::cout << "Parse error : Polynome can only have one '='" << std::endl;
        return (false);
    }
    return (true);
}

bool    all_valid_character(std::string inp){
    unsigned int    i = 0;
    while (inp[i]){
        if (!(isalnum(inp[i]) || inp[i] == '=' || inp[i] == '.' || inp[i] == '+' || inp[i] == '-' || inp[i] == '*' || inp[i] == '/' || inp[i] == '^' )){
            std::cout << "Invalid char detected :" << inp[i] << "|"<< std::endl;
            return (false);
        }
        i++;
    }
    return (true);
}

bool    all_numbers_are_valid(std::string inp){
    unsigned int    i=0;
    while (inp[i]){
        if (inp[i])
        i++;
    }
    return (true);
}*/