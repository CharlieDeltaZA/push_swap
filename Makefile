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
INC_DIR = ./includes/
OBJ_DIR = ./srcs/
OPTIONS = -I$(INC_DIR) -I./libft -lft -L./libft
HDR = ./includes/push_swap.h

OBJ_CH = $(OBJ_DIR)checker.o $(OBJ_DIR)stack_ops_1.o $(OBJ_DIR)commands_1.o
OBJ_CH += $(OBJ_DIR)commands_2.o $(OBJ_DIR)commands_3.o $(OBJ_DIR)debugging.o
OBJ_CH += $(OBJ_DIR)error_checks_1.o $(OBJ_DIR)error_checks_2.o
OBJ_CH += $(OBJ_DIR)validate.o $(OBJ_DIR)stack_ops_2.o $(OBJ_DIR)viz.o
OBJ_CH += $(OBJ_DIR)args.o

OBJ_PS = $(OBJ_DIR)push_swap.o $(OBJ_DIR)algo_1.o $(OBJ_DIR)algo_2.o
OBJ_PS += $(OBJ_DIR)algo_helper_1.o $(OBJ_DIR)algo_helper_2.o
OBJ_PS += $(OBJ_DIR)commands_1.o $(OBJ_DIR)commands_2.o $(OBJ_DIR)commands_3.o
OBJ_PS += $(OBJ_DIR)stack_ops_1.o $(OBJ_DIR)stack_ops_2.o $(OBJ_DIR)validate.o
OBJ_PS += $(OBJ_DIR)error_checks_1.o $(OBJ_DIR)error_checks_2.o $(OBJ_DIR)debugging.o
OBJ_PS += $(OBJ_DIR)viz.o

all: $(LIB) $(NAME_CH) $(NAME_PS)

$(LIB): relib cleanlib
	@echo "[$(LIB)] compiled"

%.o: $(SRC_DIR)%.c $(HDR)
	@$(CC) $(FLAGS) $(OPTIONS) -c $< -o $@

$(NAME_CH): $(OBJ_CH)
	@$(CC) -o $(NAME_CH) $(FLAGS) $(OPTIONS) $(OBJ_CH) 
	@echo "[$(NAME_CH)] compiled"

$(NAME_PS): $(OBJ_PS)
	@$(CC) -o $(NAME_PS) $(FLAGS) $(OPTIONS) $(OBJ_PS)
	@echo "[$(NAME_PS)] compiled"

clean:
	@/bin/rm -f ./srcs/*.o
	@echo "Object files removed"

fclean: clean
	@/bin/rm -f $(NAME_CH) $(NAME_PS)
	@echo "[$(NAME_CH)] & [$(NAME_PS)] removed"

re: fclean all

relib:
	@$(MAKE) -C ./libft re

cleanlib:
	@$(MAKE) -C ./libft clean

fcleanlib: cleanlib
	@$(MAKE) -C ./libft fclean
