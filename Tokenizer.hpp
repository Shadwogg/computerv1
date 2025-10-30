/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenizer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:55:02 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 10:09:09 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKENIZER_HPP
# define TOKENIZER_HPP

# include <iostream>
# include <cstdlib>

# include "Lexer.hpp"
# include "Term.hpp"
# include "Expression.hpp"
# include "Symbol.hpp"
# include "Variable.hpp"
# include "Number.hpp"

// Error handling
# include "ParsingError.hpp"

std::list<Term>	tokenify(std::string);

#endif