DEBUG ?= 0
STANDARD ?= 0

ifeq ($(DEBUG),0)
DEBUG_FLAG =
else
DEBUG_FLAG = -g
endif

ifeq ($(STANDARD), 0)
STANDARD_FLAG =
else
STANDARD_FLAG = -std=c++98
endif

NAME = main

CPP_COMPILER = c++
CPP_FLAGS = -Wall -Wextra -Werror $(DEBUG_FLAG) $(STANDARD_FLAG) 

SOURCE_FILES = main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp

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