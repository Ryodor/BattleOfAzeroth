##
## Makefile for  in /home/dauratj/C/Battle For Azeroth/daurat_j
## 
## Made by DAURAT Jerome
## Login   <daurat_j@etna-alternance.net>
## 
## Started on  Sat Oct  8 10:35:48 2016 DAURAT Jerome
## Last update Sat Oct  8 14:33:22 2016 DAURAT Jerome
##
TRASH	=	Makefile~     \
		main.c~	      \
		my_putchar.c~ \
		my_strcmp.c~  \
		readline.c~   \
		aff_sold.c~   \
		my_putstr.c~  \
		wow.h~        \
		is_command.c~ \
		my_strcmp.c~  \
		aff_ptr.c~    \
		main2.c~

OBJC	=	main.c

GCC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM      =       rm -rf

MV	=	mv

NAME	=	sulfuras

all	:
		$(GCC) $(CFLAGS) $(OBJC)
		$(MV) a.out $(NAME)
		$(RM) $(TRASH)

clean	:
		$(RM) $(TRASH)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all fclean
