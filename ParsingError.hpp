/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingError.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:24:47 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/29 18:33:09 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSINGERROR_HPP
# define PARSINGERROR_HPP

# include <iostream>
# include <cstdlib>
# include <string>

# define UNEXPECTED_ERROR 0
# define INVALID_CHAR 1
# define LACKING_CHAR 2
# define NOT_AN_OPERATOR 3
# define NO_LITTERAL 4
# define MULTIPLE_LITTERAL 5
# define EMPTY_SPACE 6


class ParsingError
{
    private:
        std::string msg;

    public :
        ParsingError(int);
        ParsingError(int, char);
        ~ParsingError();
        const char  *what(void) const throw();
};

#endif