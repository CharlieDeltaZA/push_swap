#
#             Makefile for push_swap
#
# First compiles the library for use in the project
# Before compiling the programs "checker" & "push_swap"
#

LIB = libft
NAME_CH = checker
NAME_PS = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra -c
# Compile to .o or straight to exe?
# Would need to explicity list all .o files then,
# for each exe. Might be worth it.
SRC_DIR = ./srcs/
INCLUDES = ./includes/
OPTIONS = -I./includes -I./libft
SRC_CH = $(SRC_DIR)checker.c $(SRC_DIR)stack_ops.c $(SRC_DIR)commands_1.c \
		$(SRC_DIR)commands_2.c $(SRC_DIR)commands_3.c $(SRC_DIR)error_checks.c \
		$(SRC_DIR)error_checks_2.c $(SRC_DIR)validate.c
SRC_PS = push_swap.c                                   #sources_here_PushSwap
OBJ_CH = $(SRC_CH:.c=.o)
OBJ_PS = $(SRC_PS:.c=.o)

all: $(LIB) $(NAME1) $(NAME2)

$(LIB): relib cleanlib
#	$(MAKE) -C ./libft
#	$(MAKE) -C ./libft clean

$(NAME_CH): 
	@echo "NAME_CH TODO = Needs files"
#	$(CC) $(FLAGS) $(OPTIONS) $(SRC_CH)
#	$(CC) -o $(NAME_CH) $(OBJ_CH)

$(NAME_PS):
	@echo "NAME_PS TODO = Needs files"
#	$(CC) $(FLAGS) $(OPTIONS) $(SRC_PS)
#	$(CC) -o $(NAME_PS) $(OBJ_PS)

clean:
	@echo "clean TODO"
#	/bin/rm -f $(OBJ) # *.o?

fclean: clean
	@echo "fclean TODO"
#	/bin/rm -f $(NAME_CH) $(NAME_PS)

re: fclean all

relib:
	@$(MAKE) -C ./libft re

cleanlib:
	@$(MAKE) -C ./libft clean

fcleanlib: cleanlib
	@$(MAKE) -C ./libft fclean
