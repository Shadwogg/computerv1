/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:26:37 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 12:03:19 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_HPP
# define NUMBER_HPP

# include "Operand.hpp"

class Number : public Operand{
    private :
        unsigned int    _integer;
        double          _real;

    public :
        Number(unsigned int);
        Number(double);
        ~Number(void);
        Number(Number const &);

        Number const    &operator=(Number const &);
        const char      *toString(void) const;
        bool            isDouble(void) const;
};

#endif