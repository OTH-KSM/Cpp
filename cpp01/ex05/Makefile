CC = c++ -fsanitize=address
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC =  harl.cpp main.cpp
OBJ = harl.o main.o
NAME = harl

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME) *.replace

re : fclean all