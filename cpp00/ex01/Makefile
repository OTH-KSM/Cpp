CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = Contact.o PhoneBook.o main.o
NAME = Phonebook

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all