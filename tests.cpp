/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:41:06 by ggiboury          #+#    #+#             */
/*   Updated: 2025/08/24 16:51:07 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"
#include <cctype>
#include <iostream>

bool    contains_multiple_letters(char *inp){
    int i = 0, j = 0;
    while (inp[i] != 0){
        j = i + 1;
        while (inp[j] != 0){
            if (std::isalpha(inp[i]) && std::isalpha(inp[j]) && inp[i] != inp[j]){
                std::cout << "Parse error : multiple unknown" << std::endl;
                return (true);
            }
            j++;
        }
        i++;
    }
    return (false);
}