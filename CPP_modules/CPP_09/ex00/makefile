CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
INCLUDE = -I./includes
VPATH = srcs

NAME = ex00

GENERAL = BitcoinExchange

SRC = $(addsuffix .cpp, $(GENERAL)) \
		main.cpp

OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	mkdir -p obj

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	rm -rf $(OBJ) $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: clean all

run: all
	clear && ./$(NAME)
	make fclean