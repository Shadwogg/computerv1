/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Resolver.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:51:57 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/26 17:29:13 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLVER_HPP
# define RESOLVER_HPP

# include "Expression.hpp"

class   Resolver{

    private:
        Resolver();
        ~Resolver();

    public:
        static void    resolve(Expression *left, Expression *right);

};

#endif