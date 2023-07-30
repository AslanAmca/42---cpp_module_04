# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 11:23:19 by aaslan            #+#    #+#              #
#    Updated: 2023/07/30 19:29:14 by aaslan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= abstract
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98 -g
SRC			:= AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp

all: $(NAME)

$(NAME):
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)
	@clear

fclean: clean

re: fclean all

.PHONY: all clean fclean re
