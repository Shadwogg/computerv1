/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operand.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:56:52 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/29 15:08:03 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERAND_HPP
# define OPERAND_HPP

# include <iostream>
# include <cstdlib>
# include "Symbol.hpp"

class Operand : public Symbol{
    private :
        int     integer;
        double  reel;
        char    c;

    public :
        Operand(char);
        Operand(std::string);
        Operand(Operand const &);
        ~Operand();

        Operand    operator=(Operand const &);
};

#endif