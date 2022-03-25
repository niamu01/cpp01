# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 18:40:22 by yeju              #+#    #+#              #
#    Updated: 2022/03/25 21:01:52 by yeju             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
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