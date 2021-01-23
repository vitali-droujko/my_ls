##
## EPITECH PROJECT, 2020
## B-PSU-100-NCE-1-1-myls-vitali.droujko
## File description:
## MAKEFILE MY_LS
##

SRC		= 	src/disp_id.c 	\
			src/info_path.c 	\
			src/init_param.c 	\
			src/path.c 			\
			src/return_error.c 	\
			src/selector.c 		\
			src/switch_flag.c 	\
			src/main.c 			\

NAME	=	my_ls

LIB		=	/lib/

MYH		=	my.h

CFLAGS	+=	-I.$(MY)

MY	=	/include/

CC	=	gcc

all	:	$(OBJ)
		make -C lib/ all
		$(CC) -o $(NAME) $(SRC) $(CFLAGS) -L.$(LIB) -lmy

clean	:
		rm -f $(OBJ)
		make -C lib/ clean

fclean	:	clean
		rm -f $(NAME)
		make -C lib/ fclean

re	:	fclean all
		make -C lib/ re