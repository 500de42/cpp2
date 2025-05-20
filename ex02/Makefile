NAME = a.out
SRC = main.cpp Fixed.cpp
OBJ = $(SRC.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

$(OBJ) : $(SRC)
	c++ $(FLAGS) -c $(SRC)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all