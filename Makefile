
LIB = libft.a
NAME1 = checker
NAME2 = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra
OPTIONS = -c -I.
OBJ = *.o
SRC = sources_here

all: $(LIB) $(NAME1) $(NAME2)

$(LIB):
	$(MAKE) -C ./libft
	$(MAKE) -C ./libft clean

$(NAME1):
	@echo "NAME1 TODO"
$(NAME2):
	@echo "NAME2 TODO"
clean:
	@echo "clean TODO"
fclean:
	@echo "fclean TODO"
re: fclean all
