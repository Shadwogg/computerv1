/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:26:37 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 10:29:22 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_HPP
# define NUMBER_HPP

# include "Operand.hpp"

class Number : public Operand{
    private :
        unsigned int    integer;
        double          real;

    public :
        Number(int);
        Number(double);
        ~Number(void);
        Number(Number const &);

        Number const    &operator=(Number const);
        const char    *toString(void) const;
};

#endif