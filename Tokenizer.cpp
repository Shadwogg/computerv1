/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenizer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:55:04 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 09:22:10 by ggiboury         ###   ########.fr       */
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

/**
 * @brief Return the next number in the string
 * 
 * @param inp The string 
 * @param start Position at which we start
 * @return Operand* ; A Number, or a Litteral
 */
Operand	*extract_number(std::string const &inp, size_t start){
	// Int
	(void) inp;
	(void) start;
	//Real
	return (NULL);
}


void	print_symbols(std::list<Symbol *> l){
	std::list<Symbol *>::iterator it, ite;
	
	it = l.begin();
	ite = l.end();

	std::cout << "Printing symbols" << std::endl;
	while (it != ite){
		std::cout << (*it)->toString() << " ";
		it++;
	}
	std::cout << std::endl;
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
	if (inp[0] == 0)
		throw (ParsingError(EMPTY_SPACE));
	std::list<Term> tokens;
	std::cout << inp << std::endl;
    
	std::list<Symbol *> symbols;

	Operator    *op;
	Operand		*opd;
	
	while (inp[i]){
		//case Number
		if (isalnum(inp[i])){
			std::cout << "	We got a number" << std::endl;
			opd = extract_number(inp, i);
			i++;
		} else if (is_operator(inp[i])){
			std::cout << "	Reconnaisance d'operateur" << std::endl;
            op = new Operator(inp[i]);
			symbols.push_back(op);
			i++;
		} else {
			std::cout << "Error, unrecognized token" << std::endl;
			throw (ParsingError(UNEXPECTED_ERROR));
		}
	}
	print_symbols(symbols);
	return (tokens);
}
