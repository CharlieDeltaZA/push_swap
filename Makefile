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
# Compile to .o or straight to exe?
# Would need to explicity list all .o files then,
# for each exe. Might be worth it.
OBJ1 = *.o
OBJ2 = *.o
SRC1 = sources_here_Checker
SRC2 = sources_here_PushSwap

all: $(LIB) $(NAME1) $(NAME2)

$(LIB): relib cleanlib
#	$(MAKE) -C ./libft
#	$(MAKE) -C ./libft clean

$(NAME1):
	@echo "NAME1 TODO = Needs files"
#	$(CC) $(FLAGS) $(OPTIONS) $(SRC1)
#	$(CC) -o $(NAME1) $(OBJ1)

$(NAME2):
	@echo "NAME2 TODO = Needs files"
#	$(CC) $(FLAGS) $(OPTIONS) $(SRC2)
#	$(CC) -o $(NAME2) $(OBJ2)

clean:
	@echo "clean TODO"
#	/bin/rm -f $(OBJ) # *.o?

fclean: clean
	@echo "fclean TODO"
#	/bin/rm -f $(NAME1) $(NAME2)

re: fclean all

relib:
	make -C ./libft re

cleanlib:
	make -C ./libft clean

fcleanlib: cleanlib
	make -C ./libft fclean
