/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:51:14 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/21 00:00:55 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
    Take care of the vocabulary part 1
    Alphabet : [a-Z], [0-9], '=', '.', [+*-/]

*/
#ifndef LEXER_HPP
# define LEXER_HPP

# include <iostream>
# include <string>


// bool    contains_multiple_letters(std::string inp);
// bool    is_egal_valid(std::string inp);
// bool    all_valid_character(std::string inp);

bool    is_operator(char);
bool    is_exponent(char);
bool    lexe_is_valid(std::string inp);

#endif