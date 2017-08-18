##
## Makefile for Makefile in /home/marc/repertoire_rendu/libmy/libmy_02
## 
## Made by HANIN Marc
## Login   <hanin_m@etna-alternance.net>## 
## Started on  Tue Mar 29 13:29:44 2016 HANIN Marc
## Last update Fri Apr  1 11:00:19 2016 HANIN Marc
##

AR	= ar r
RAN	= ranlib
NAME	= libmy.a
SRC	= my_putchar.c		\
	  my_isneg.c		\
	  my_put_nbr.c		\
	  my_swap.c		\
	  my_putstr.c		\
	  my_strlen.c		\
	  my_getnbr.c		\
	  my_strcpy.c		\
	  my_strncpy.c		\
	  my_strcmp.c		\
	  my_strncmp.c		\
	  my_strcat.c		\
	  my_strncat.c		\
	  my_strstr.c		\
	  my_str_to_wordtab.c	\
	  my_strdup.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
$(NAME):	$(OBJ)
		$(AR) $(NAME) $(OBJ)
		$(RAN) $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)
