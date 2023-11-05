CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = Contact.cpp Phonebook.cpp main.cpp
OBJ = Contact.o Phonebook.o main.o
NAME = Phonebook

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all