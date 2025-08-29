/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Expression.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:53:41 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 15:07:35 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPRESSION_HPP
# define EXPRESSION_HPP

# include <string>
# include <iostream>
# include <list>

# include "Symbol.hpp"
# include "Operator.hpp"
# include "Operand.hpp"

class Expression {
    private :
        std::list<Symbol>   symbols;
        int                 degree;

    public :
        Expression(std::string);
        ~Expression();
    
        int getDegree(void) const;
};
#endif