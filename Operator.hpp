/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:17:49 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/28 13:34:59 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_HPP
# define OPERATOR_HPP

# include <iostream>
# include "ParsingError.hpp"
class Operator{
    private :
        char    op;

    public :
        Operator(char);
        Operator(Operator const &);
        ~Operator();

        Operator    operator=(Operator const &);
        
        // bool    is_sum(void);
        // bool    is_multiplication(void);
        // bool    is_exponent(void);
};

#endif 