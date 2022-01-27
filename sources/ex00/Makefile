NAME = zombie

SRC = newZombie.cpp randomChump.cpp main.cpp Zombie.cpp

FLAGS = -Wall -Werror -Wextra -o

all: $(NAME)

$(NAME):
	clang++ $(SRC) $(FLAGS) $@

fclean:
	rm -rf $(NAME)

clean:

re: fclean $(NAME)
