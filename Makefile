#
#             Makefile for push_swap
#
# First compiles the library for use in the project
# Before compiling the programs "checker" & "push_swap"
#

LIB = libft
NAME1 = checker
NAME2 = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra -c
# Compile to .o or straight to exe?
# Would need to explicity list all .o files then,
# for each exe. Might be worth it.
SRC_DIR = ./srcs/
INCLUDES = ./includes/
OPTIONS = -I./includes -I./libft
SRC1 = $(SRC_DIR)checker.c $(SRC_DIR)stack_ops.c $(SRC_DIR)commands_*.c \
					$(SRC_DIR)error_checks.c $(SRC_DIR)validate.c #sources_here_Checker
SRC2 = push_swap.c                                   #sources_here_PushSwap
OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)

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
	@$(MAKE) -C ./libft re

cleanlib:
	@$(MAKE) -C ./libft clean

fcleanlib: cleanlib
	@$(MAKE) -C ./libft fclean
