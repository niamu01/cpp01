# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:56:37 by yeju              #+#    #+#              #
#    Updated: 2022/03/25 20:56:37 by yeju             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CFLAGS = -Wall -Wextra -Werror
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