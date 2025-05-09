NAME = main

CPP_COMPILER = c++
CPP_FLAGS = -Wall -Wextra -Werror

SOURCE_FILES = main.cpp \
               Zombie.cpp \
			   zombieHorde.cpp
HEADER_FILES = main.hpp \
               Zombie.hpp
OBJECT_FILES = $(patsubst %.cpp, %.o, $(SOURCE_FILES))

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	$(CPP_COMPILER) $(CPP_FLAGS) $(OBJECT_FILES) -o $(NAME)

%.o: %.cpp $(HEADER_FILES)
	$(CPP_COMPILER) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re