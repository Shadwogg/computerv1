/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Symbol.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:39:55 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/29 18:57:06 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYMBOL_HPP
# define SYMBOL_HPP

class Symbol{

    public :
        Symbol();
        virtual ~Symbol();
        
        virtual bool    isOperand() const = 0;
};

#endif