##
## EPITECH PROJECT, 2020
## main Makefile
## File description:
## root
##

SRC	=	main.c	\
		sources/usage.c	\
		sources/error/check_map.c	\
		sources/game/curse.c	\
		sources/player/player.c	\
		sources/player/player_move.c	\
		sources/game/move.c	\
		sources/game/print_map.c	\
		sources/player/box.c	\
		sources/game/retry.c	\
		sources/end/win.c	\
		sources/end/lose.c	\
		sources/freedom.c	\
		sources/redimension/redimension.c	\

SRC_TEST=	sources/error/check_map.c	\
			tests/test_check_error.c	\
			sources/player/player.c	\
			sources/player/box.c	\
			tests/test_get_player.c	\
			tests/test_box.c	\

CFLAGS	=	-W -Wall -Wextra -Werror -g3

INC	=	-I include/

CRITFLAGS=	-lcriterion --coverage

LFLAGS	=	-L lib/my -lmy -lncurses

NAME	=	my_sokoban

NAME_TEST=	unit_tests

all:
	make -C ./lib/my all
	gcc -o $(NAME) $(SRC) $(LFLAGS) $(INC) $(CFLAGS)

tests_run: fclean
	make -C ./lib/my all
	gcc $(SRC_TEST) -o $(NAME_TEST) $(CRITFLAGS) $(INC) $(LFLAGS) $(CFLAGS)
	./$(NAME_TEST)
	-gcovr --exclude tests
	-gcovr -b --exclude tests

clean:
	make -C ./lib/my clean
	rm -f *~
	rm -f sources/*~
	rm -f include/*~
	rm -rf tests/*~

fclean: clean
	make -C ./lib/my fclean
	rm -f $(NAME)

re: fclean all
