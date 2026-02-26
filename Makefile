##
## EPITECH PROJECT, 2025
## day12
## File description:
## day12
##

CC		=	epiclang
CFLAGS		=	-g -Wall -Werror -Wextra
CPPFLAGS	=	-Iinclude

NAME	=	fractals
SRC	=	src/main.c	\

OBJ	=	$(SRC:%.c=%.o)

all: library $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $(OBJ) lib/my/libmy.a $(CFLAGS)

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

library:
	$(MAKE) -C lib/my all

clean:
	rm -f $(OBJ)
	$(MAKE) -C lib/my clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C lib/my fclean

re: fclean all

.PHONY: all clean fclean re library
