CC = c++ -fsanitize=address
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC =  replace.cpp main.cpp
OBJ = replace.o main.o
NAME = replace

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME) *.replace

re : fclean all