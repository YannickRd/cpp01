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

EXTRA_FLAGS = $(DEBUG_FLAG) $(STANDARD_FLAG)

NAME = main

CPP_COMPILER = c++
CPP_FLAGS = -Wall -Wextra -Werror $(EXTRA_FLAGS)

SOURCE_FILES = main.cpp \
			errors_handling.cpp \
			processing.cpp
HEADER_FILES = main.hpp
OBJECT_FILES = $(patsubst %.cpp,%.o,$(SOURCE_FILES))

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