NAME	=	Human

SRC		=	main.cpp		\
			Weapon.cpp		\
			HumanA.cpp		\
			HumanB.cpp


OBJ		=	$(SRC:.cpp=.o)

FLAG	=	c++ -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

$(NAME):
		$(FLAG) $(SRC) -o $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJ) 

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
