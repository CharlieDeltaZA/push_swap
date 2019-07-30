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
FLAGS = -Wall -Werror -Wextra -g
# Compile to .o or straight to exe?
# Would need to explicity list all .o files then,
# for each exe. Might be worth it.
SRC_DIR = ./srcs/
INCLUDES = ./includes/
OPTIONS = -I./includes -I./libft -lft -L./libft
SRC_COMMON = $(SRC_DIR)stack_ops_1.c $(SRC_DIR)commands_1.c
SRC_COMMON += $(SRC_DIR)commands_2.c $(SRC_DIR)commands_3.c
SRC_COMMON += $(SRC_DIR)error_checks_1.c $(SRC_DIR)error_checks_2.c
SRC_COMMON += $(SRC_DIR)validate.c $(SRC_DIR)stack_ops_2.c
SRC_COMMON += $(SRC_DIR)debugging.c
SRC_ALGO = $(SRC_DIR)algo_1.c $(SRC_DIR)algo_2.c $(SRC_DIR)algo_helper_1.c
SRC_ALGO += $(SRC_DIR)algo_helper_2.c
SRC_CH = $(SRC_DIR)checker.c $(SRC_COMMON)
SRC_PS = $(SRC_DIR)push_swap.c $(SRC_COMMON) $(SRC_ALGO)

OBJ_CH = $(SRC_DIR)checker.o $(SRC_DIR)stack_ops_1.o $(SRC_DIR)commands_1.o
OBJ_CH += $(SRC_DIR)commands_2.o $(SRC_DIR)commands_3.o $(SRC_DIR)debugging.o
OBJ_CH += $(SRC_DIR)error_checks_1.o $(SRC_DIR)error_checks_2.o
OBJ_CH += $(SRC_DIR)validate.o $(SRC_DIR)stack_ops_2.o
#OBJ_PS = $(SRC_PS:.c=.o)

all: $(LIB) $(NAME_CH) $(NAME_PS)

$(LIB): relib cleanlib
	@echo "$(LIB) compiled"
#	$(MAKE) -C ./libft
#	$(MAKE) -C ./libft clean

$(NAME_CH): 
	@echo "$(NAME_CH) compiled"
#	@$(CC) $(FLAGS) $(OPTIONS) $(SRC_CH) -o $(NAME_CH)
	@$(CC) $(FLAGS) $(OPTIONS) $(SRC_CH) -c
	@$(CC) -o $(NAME_CH) $(OPTIONS) $(OBJ_CH) 

$(NAME_PS):
	@echo "$(NAME_PS) compiled"
	@$(CC) $(FLAGS) $(OPTIONS) $(SRC_PS) -o $(NAME_PS)
#	$(CC) -o $(NAME_PS) $(OBJ_PS)

clean:
	@echo "clean TODO"
#	/bin/rm -f $(OBJ) # *.o?

fclean: clean
	@echo "$(NAME_CH) & $(NAME_PS) removed"
	@/bin/rm -f $(NAME_CH) $(NAME_PS)

re: fclean all

relib:
	@$(MAKE) -C ./libft re

cleanlib:
	@$(MAKE) -C ./libft clean

fcleanlib: cleanlib
	@$(MAKE) -C ./libft fclean
