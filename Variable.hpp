/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Variable.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:58:12 by ggiboury          #+#    #+#             */
/*   Updated: 2025/10/30 10:07:50 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARIABLE_HPP
# define VARIABLE_HPP

# include "Operand.hpp"

class Variable : public Operand{
    
    private:
        const char _name;
    
    public:
        Variable(char);
        ~Variable(void);
        
        Variable(Variable const &);
        
        Variable const    &operator=(Variable const &);
    
        const char *toString(void) const;
};

#endif