NAME =  logger
OBJ_DIR = obj/
C_FILES = Logger.cpp main.cpp
OBJ = $(addprefix $(OBJ_DIR), $(C_FILES:.cpp=.o))
HEADERS = Logger.hpp
CC = clang++
CFLAGS = -Wall -Wextra -Werror
C_RED = \033[31m
C_GREEN = \033[32m
C_MAGENTA = \033[35m
C_NONE = \033[0m

all: $(NAME)


$(NAME):$(HEADERS) $(OBJ_DIR) $(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)		
$(OBJ_DIR):
				@mkdir obj		
$(OBJ_DIR)%.o: %.cpp $(HEADERS)
				@$(CC) $(CFLAGS) -c $(INC) $< -o $@	
clean:
				@rm -rf $(OBJ_DIR)*	
fclean: clean
				@rm -rf $(NAME)
re: fclean all