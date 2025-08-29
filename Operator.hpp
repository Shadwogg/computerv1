/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:17:49 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 12:54:54 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_HPP
# define OPERATOR_HPP

# include <iostream>
# include "Symbol.hpp"

class Operator : public Symbol{
    private :
    
    public :
        Operator(char);
        Operator(Operator const &);
        ~Operator();

        Operator    operator=(Operator const &);
        
};

#endif 