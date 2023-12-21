NAME	=	Zoo

SRC		=	main.cpp		\
			Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			Brain.cpp		\
			WrongAnimal.cpp	\
			WrongCat.cpp	

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
