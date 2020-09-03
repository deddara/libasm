# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/03 12:53:27 by deddara           #+#    #+#              #
#    Updated: 2020/09/03 14:06:21 by deddara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
TEST = run_test
NASM_FLGS = nasm -f macho64
GCC_FLGS = gcc -Wall -Wextra -Werror
OBJ_DIR = obj/

.PHONY: all clean fclean

NASM_DIR = src/
NASM_SRC = $(wildcard $(NASM_DIR)*.s)
NASM_SRC.O =  $(addprefix $(OBJ_DIR), $(NASM_SRC:.s=.o))

TEST_DIR = test/
TEST_SRC = $(wildcard *.c)
TEST_SRC.O =  $(addprefix $(OBJ_DIR), $(TEST_SRC:.c=.o))

all: $(OBJ_DIR) $(NAME)

$(NAME): $(NASM_SRC.O)
	ar rcs $(NAME) $?

$(NASM_SRC.O): $(OBJ_DIR)%.o: %.s
	$(NASM_FLGS) $< -o $@
	
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)/src
clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -f $(NAME)
	@rm -f test

.PHONY: test
test: $(TEST)

$(TEST): $(TEST_SRC.O) $(NAME)
	$(GCC_FLGS) $(TEST_SRC.O) $(NAME) -o $(TEST)

$(TEST_SRC.O): $(OBJ_DIR)%.o: %.c
	$(GCC_FLGS) -c $< -o $@

