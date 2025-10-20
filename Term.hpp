/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Term.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:40:30 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/20 22:45:32 by ggiboury         ###   ########.fr       */
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

    public :
        Term();
        ~Term();
    
        // int getDegree(void) const;
};
#endif