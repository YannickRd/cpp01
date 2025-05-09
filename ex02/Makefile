STANDARD ?= 0
DEBUG ?= 0

ifeq ($(STANDARD), 0)
STANDARD_FLAG =
else
STANDARD_FLAG = -std=c++98
endif

ifeq ($(DEBUG), 0)
DEBUG_FLAG =
else
DEBUG_FLAG = -g
endif

EXTRA_FLAGS = $(STANDARD_FLAG) $(DEBUG_FLAG)

NAME = main

CPP_COMPILER = c++
CPP_FLAGS = -Wall -Wextra -Werror $(EXTRA_FLAGS)

SOURCE_FILE = main.cpp
OBJECT_FILE = $(patsubst %.cpp,%.o,$(SOURCE_FILE))

all: $(NAME)

$(NAME): $(OBJECT_FILE)
	$(CPP_COMPILER) $(CPP_FLAGS) $(OBJECT_FILE) -o $(NAME)

%.o: %.cpp
	$(CPP_COMPILER) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT_FILE)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re