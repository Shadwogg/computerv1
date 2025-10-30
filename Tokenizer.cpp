/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenizer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:55:04 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 17:17:14 by ggiboury         ###   ########.fr       */
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
 * @return Operand* ; A Number 00121...001 | 1.02 | 
 */
Operand	*extract_number(std::string const &inp, size_t start){
	size_t i = start;
	Operand	*opd = NULL;
	bool	is_float = false;

	//Checking if its an int or a float
	while (inp[i]){
		if (inp[i] == '.'){
			is_float = true;
			break ;
		}
		i++;
	}

	if (is_float){
		opd = new Number((double) 0);
	}else {
		opd = new Number((unsigned int)0);
	}
	
	return (opd);
}


void	print_symbols(std::list<Symbol *> l){
	std::list<Symbol *>::iterator it, ite;
	
	it = l.begin();
	ite = l.end();

	std::cout << "\033[1;31mPrinting symbols\033[0m" << std::endl;
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
		if (isalpha(inp[i])){
			opd = new Variable(inp[i]);
			symbols.push_back(opd);
			i++;
		} else if (isdigit(inp[i])){
			std::cout << "Houston, wevgot a number" << std::endl;
			opd = extract_number(inp, i);
			symbols.push_back(opd);
			i+= 1; // todo
		} else if (is_operator(inp[i])){
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
