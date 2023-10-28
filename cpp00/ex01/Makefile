CC = c++ -fsanitize=address
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = Contact.cpp Phonebook.cpp 
OBJ = Contact.o Phonebook.o  
NAME = Phonebook

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all