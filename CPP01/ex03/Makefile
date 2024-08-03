# Coder Alias
USER_NAME = Josu
# Compiler and flags
CC        = clang++
CFLAGS    = -Wall -Wextra -Werror
# Directories
SRC_DIR   = 	./
INC_DIR   = 	./
OBJ_DIR   = 	./
# Source files
SRC_FILE =	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

SRC      =				$(addprefix $(SRC_DIR), $(SRC_FILE))
OBJ_FILE =				$(SRC_FILE:.cpp=.o)
OBJ      = 				$(addprefix $(OBJ_DIR), $(OBJ_FILE))

# Output executable
NAME     = violence

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@
	@echo "✔ $(USER_NAME)'s $(NAME) compilation"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	@echo "✔ $(USER_NAME)'s $(NAME) .o files removal"

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
	@echo "✔ $(USER_NAME)'s $(NAME) executable and .o files removal"

re: fclean all

.PHONY: all clean fclean re