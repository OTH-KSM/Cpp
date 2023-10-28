CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC =  main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = main.o Zombie.o newZombie.o randomChump.o 
NAME = Zombie

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all