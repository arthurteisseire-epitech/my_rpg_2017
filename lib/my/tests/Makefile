##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC	=	gcc
DSRC_UT	=	./
DLIB	=	../
INC	=	$(DLIB)

DSRC	=	../
DSTRING	=	$(DSRC)string/
DPUT	=	$(DSRC)put/
DENV	=	$(DSRC)env/
DARRAY	=	$(DSRC)array/
DFILE	=	$(DSRC)file/

SRC	=	$(DPUT)my_put_nbr.c		\
		$(DPUT)my_putchar.c		\
		$(DPUT)my_puterror.c		\
		$(DPUT)my_putnbr_base.c		\
		$(DPUT)my_putstr.c		\
		$(DSTRING)my_str_isalphanum.c	\
		$(DSTRING)my_str_isnum.c	\
		$(DSTRING)my_strcat.c		\
		$(DSTRING)my_strcmp.c		\
		$(DSTRING)my_strcpy.c		\
		$(DSTRING)my_strdup.c		\
		$(DSTRING)my_strip.c		\
		$(DSTRING)my_strlen.c		\
		$(DSTRING)my_strncat.c		\
		$(DSTRING)my_strncmp.c		\
		$(DSTRING)my_strncpy.c		\
		$(DSTRING)my_strndup.c		\
		$(DSTRING)count_endflags.c	\
		$(DSTRING)count_flags.c		\
		$(DSTRING)my_pow.c		\
		$(DSTRING)my_ftoa.c		\
		$(DSTRING)my_atoi.c		\
		$(DSTRING)my_itoa.c		\
		$(DSTRING)concat.c		\
		$(DSTRING)get_next_to.c		\
		$(DSTRING)get_before_to.c	\
		$(DSTRING)bufferize.c		\
		$(DSTRING)my_strstr.c		\
		$(DSTRING)get_next_word.c	\
		$(DSTRING)is_char_in_str.c	\
		$(DSTRING)len_to_flags.c	\
		$(DSTRING)count_words.c		\
		$(DARRAY)my_memcpy.c		\
		$(DARRAY)my_memset.c		\
		$(DARRAY)my_arrlen.c		\
		$(DARRAY)my_arrcpy.c		\
		$(DARRAY)my_arrdup.c		\
		$(DARRAY)apply_on_array.c	\
		$(DARRAY)add_arrelem.c		\
		$(DARRAY)rm_arrelem.c		\
		$(DARRAY)free_and_set.c		\
		$(DARRAY)free_array.c		\
		$(DARRAY)split.c		\
		$(DARRAY)array_to_str.c		\
		$(DSRC)get_next_line.c 		\
		$(DENV)get_env_value.c		\
		$(DENV)index_name.c		\
		$(DENV)disp_env.c		\
		$(DENV)set_env_value.c		\
		$(DFILE)my_fdcpy.c		\
		$(DFILE)write_in_file.c

SRC_UT	=	$(DSRC_UT)redirect.c		\
		$(DSRC_UT)tests_output.c	\
		$(DSRC_UT)tests_cpy.c		\
		$(DSRC_UT)tests_strcat.c	\
		$(DSRC_UT)tests_atoi.c		\
		$(DSRC_UT)tests_ftoa.c		\
		$(DSRC_UT)tests_base.c		\
		$(DSRC_UT)tests_split.c		\
		$(DSRC_UT)tests_get_next_line.c	\
		$(DSRC_UT)tests_get_next_to.c	\
		$(DSRC_UT)tests_get_before_to.c	\
		$(DSRC_UT)tests_my_strstr.c	\
		$(DSRC_UT)tests_array_to_str.c	\
		$(DSRC_UT)tests_cmp.c

LIB	=	my
LIBS	=	-L$(DLIB) -l$(LIB)
CFLAGS	+=	-Wall -W -Wextra --coverage -I$(INC)
LDFLAGS	=	-lcriterion -lgcov
NAME	=	units

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) $(SRC_UT) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test_run: re
	./$(NAME)
	gcov *.gcno
