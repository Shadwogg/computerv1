/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:51:14 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/11 16:56:13 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/**
    Alphabet : [a-Z], [0-9], '=', '.'
    
     tr
*/
#ifndef LEXER_HPP
# define LEXER_HPP

bool    contains_multiple_letters(std::string inp);
bool    is_egal_valid(std::string inp);
bool    all_valid_character(std::string inp);

#endif