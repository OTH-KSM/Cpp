CC = c++ -fsanitize=address
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = megaphone.cpp
OBJ = megaphone.o
NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all