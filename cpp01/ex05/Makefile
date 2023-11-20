CXX = c++ -fsanitize=address
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC =  harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = harl

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all