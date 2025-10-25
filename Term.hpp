/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Term.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:40:30 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/25 15:06:21 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TERM_HPP
# define TERM_HPP

# include <string>
# include <iostream>
# include <list>

# include "Operand.hpp"
# include "Operator.hpp"


class Term {
    private :
        Operand     *opd;
        Operator    *op;
        std::string term;

    public :
        Term(std::string);
        ~Term();
    
        // int getDegree(void) const;
};
#endif