#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elopukh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 12:37:05 by elopukh           #+#    #+#              #
#    Updated: 2018/06/13 12:37:07 by elopukh          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = phonebook
OBJ_DIR = obj/
C_FILES = Book.cpp phonebook.cpp
OBJ = $(addprefix $(OBJ_DIR), $(C_FILES:.cpp=.o))
HEADERS = Book.hpp
CC = clang++
CFLAGS = -Wall -Wextra -Werror
C_RED = \033[31m
C_GREEN = \033[32m
C_MAGENTA = \033[35m
C_NONE = \033[0m

all: $(NAME)


$(NAME):$(HEADERS) $(OBJ_DIR) $(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
				@printf "$(C_MAGENTA)megaphone:$(C_NONE) %-25s$(C_GREEN)[done]$(C_NONE)\n" $@
$(OBJ_DIR):
				@mkdir obj
				@@printf "$(C_MAGENTA)megaphone:$(C_NONE) %-25s$(C_GREEN)[done]$(C_NONE)\n" $@
$(OBJ_DIR)%.o: %.cpp $(HEADERS)
				@$(CC) $(CFLAGS) -c $(INC) $< -o $@
				@@printf "$(C_MAGENTA)megaphone:$(C_NONE) %-25s$(C_GREEN)[done]$(C_NONE)\n" $@
clean:
				@rm -rf $(OBJ_DIR)*
				@@printf "$(C_MAGENTA)megaphone:$(C_NONE) %-25s$(C_RED)[done]$(C_NONE)\n" $@

fclean: clean
				@rm -rf $(NAME)
				@@printf "$(C_MAGENTA)megaphone:$(C_NONE) %-25s$(C_RED)[done]$(C_NONE)\n" $@

re: fclean all