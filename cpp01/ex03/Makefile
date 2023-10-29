CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC =  main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = main.o HumanA.o HumanB.o Weapon.o
NAME = war

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all