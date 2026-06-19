NAME = harlFilter

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re