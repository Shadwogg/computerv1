/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:26:37 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 17:32:58 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_HPP
# define NUMBER_HPP

# include "Operand.hpp"
// #include <sstream>
#include <string>


class Number : public Operand{
    private :
        unsigned int    _integer;
        double          _real;
        bool            _is_real;

    public :
        Number(unsigned int);
        Number(double);
        ~Number(void);
        Number(Number const &);

        Number const    &operator=(Number const &);
        const char      *toString(void) const;
        bool            isReal(void) const;
};

#endif