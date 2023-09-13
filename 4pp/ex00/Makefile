NAME = onlyAnimals

CXX = c++

CPPFLAGS = -I includes

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RAW = Animal Dog Cat WrongAnimal WrongCat

SAUCE = $(addprefix sauce/, $(addsuffix .cpp, $(RAW) main))
INC = $(addprefix includes/, $(addsuffix .hpp, $(RAW)))

OBJ = $(SAUCE:cpp=o)

$(NAME) : $(OBJ) $(INC) Makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re