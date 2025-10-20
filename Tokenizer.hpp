/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenizer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:55:02 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/20 23:59:32 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKENIZER_HPP
# define TOKENIZER_HPP

# include <iostream>
# include <cstdlib>

# include "Lexer.hpp"
# include "Expression.hpp"

Expression	*tokenify(std::string);

#endif