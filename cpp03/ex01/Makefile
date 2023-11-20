CXX = c++ -fsanitize=address
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC =  ClapTrap.cpp main.cpp ScavTrap.cpp
OBJ = ClapTrap.o main.o ScavTrap.o
NAME = exe

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all