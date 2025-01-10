NAME = Account
CPP = c++
RM = rm -rf
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC =	Account.cpp\
		tests.cpp\

OBJ = $(SRC:.cpp=.o)

Reset = \033[0m
G = \033[32m
R = \033[31m
Y = \033[33m
blink = \033[6;7;1;3m

all: $(NAME)


$(NAME): $(OBJ)
	@echo "-----------------------Compilation of $(NAME)----------------------------------------"
	$(CPP) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "-------------------------------------------------------------------------------------"
	@echo "$(blink)$(G) ✅ $(NAME) successfully compiled $(Reset)"

val: re
	valgrind --show-leak-kinds=all --leak-check=full --track-origins=yes  -s ./Account

get_log:
	wget https://cdn.intra.42.fr/document/document/28439/19920104_091532.log

clean:
	$(RM) $(OBJ)
	@echo "$(Y) 😉 Objects from the $(NAME) project have been removed $(Reset)"

fclean: clean
	@echo "-------------------------------------------------------------------------------------"
	$(RM) $(NAME)
	$(RM) new_log.log
	$(RM) old_log.log
	@echo "$(blink)$(R) ❌ removed $(NAME) executable $(Reset)"
	@echo "-------------------------------------------------------------------------------------"


re: fclean all

diff: re get_log
	./$(NAME) | awk '{print $$2}' > new_log.log

	cat 19920104_091532.log | awk '{print $$2}' > old_log.log
	diff new_log.log old_log.log && echo "$(G) ✅ Test passed $(Reset)" || echo "$(R) ❌ Test failed $(Reset)"
	$(RM) 19920104_091532.log


.PHONY: all clean fclean re
