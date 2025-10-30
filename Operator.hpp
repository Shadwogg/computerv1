/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:17:49 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 09:19:22 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_HPP
# define OPERATOR_HPP

# include <iostream>

# include "Symbol.hpp"
# include "Lexer.hpp"
# include "ParsingError.hpp"

class Operator : public Symbol{
    protected :
        char    op;

    public :
        Operator(char);
        Operator(Operator const &);
        ~Operator();

        Operator    operator=(Operator const &);
        
        bool    isOperand() const;
        const char    *toString(void) const;
        
        // bool    is_sum(void);
        // bool    is_multiplication(void);
        // bool    is_exponent(void);
};

#endif 