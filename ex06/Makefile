# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:55:57 by yeju              #+#    #+#              #
#    Updated: 2022/03/25 21:01:52 by yeju             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HarlFilter
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Harl.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	clang++ $(CFLAGS) -c $(SRCS)
	clang++ $(CFLAGS) $(OBJS) -o $(NAME)

.PHONY : all clean fclean re