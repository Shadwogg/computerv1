# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/24 16:32:09 by ggiboury          #+#    #+#              #
#    Updated: 2025/10/20 23:58:28 by ggiboury         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			::= computerv1
SOURCES_PATH 	::= ./
SOURCES_UTIL	::= tests Resolver Expression Term Operator Operand Lexer Tokenizer
SOURCES_MAIN	::= main $(SOURCES_UTIL)
SOURCES			::= $(foreach buffer, $(SOURCES_MAIN), $(SOURCES_PATH)$(buffer).cpp)
OBJS			::= $(SOURCES:.cpp=.o)
HEADERS			::= ./
CXXFLAGS		::= -Wall -Wextra -Werror -std=c++98 -g3
CXX				::= c++

all: $(NAME)

.cpp.o :
	$(CXX) $(CXXFLAGS) -I$(HEADERS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re