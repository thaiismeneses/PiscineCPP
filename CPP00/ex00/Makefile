NAME = megaphone
CXX = c++
RM = rm -rf
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC =	ex00.cpp

OBJ = $(SRC:.cpp=.o)

Reset = \033[0m
G = \033[32m
R = \033[31m
Y = \033[33m
blink = \033[6;7;1;3m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "-----------------------Compilation of $(NAME)----------------------------------------"
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) 
	@echo "-------------------------------------------------------------------------------------"
	@echo "$(blink)$(G) ✅ $(NAME) successfully compiled $(Reset)"

val: re
	valgrind --show-leak-kinds=all --leak-check=full --track-origins=yes  -s ./megaphone

clean:
	$(RM) $(OBJ)
	@echo "$(Y) 😉 Objects from the $(NAME) project have been removed $(Reset)"

fclean: clean
	@echo "-------------------------------------------------------------------------------------"
	$(RM) $(NAME)
	@echo "$(blink)$(R) ❌ removed $(NAME) executable $(Reset)"
	@echo "-------------------------------------------------------------------------------------"


re: fclean all

.PHONY: all clean fclean re