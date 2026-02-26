##
## EPITECH PROJECT, 2025
## makefile
## File description:
## makefile
##

SRC	=	output.c	\
		string_len_cmp.c	\
		string_copy.c	\
		string_manip.c	\
		string_utils.c	\
		conversion.c	\
		math.c	\
		check.c	\
		utils.c	\
		frac_cmpt.c	\
	my_str_to_word_array.c	\
	my_str_to_word_array_delim.c	\
	multiple_word_cmpt.c	\

OBJ	=	$(SRC:.c=.o)

all: exe

exe: $(OBJ)
	ar rc libmy.a $(OBJ)
	cp my.h ../../include/

$(OBJ): $(SRC)
	epiclang -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libmy.a

re: fclean all