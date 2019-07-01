#
#             Makefile for push_swap
#
# First compiles the library for use in the project
# Before compiling the programs "checker" & "push_swap"
#

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
#	/bin/rm -f $(OBJ)
fclean: clean
	@echo "fclean TODO"
#	/bin/rm -f $(NAME1) $(NAME2)
re: fclean all
