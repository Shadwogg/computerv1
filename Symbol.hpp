/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Symbol.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:52:54 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 12:50:24 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYMBOL_HPP
# define SYMBOL_HPP


class   Symbol {
    protected :
        Symbol(char);
        
    private :
        char    c;
    
    public :
        ~Symbol();

};
#endif