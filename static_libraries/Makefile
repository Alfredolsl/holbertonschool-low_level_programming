CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
RM = rm -f
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

.PHONY: all clean

all: $(OBJ)
	$(CC) -c $(CFLAGS) $(SRC) -o $(OBJ)

oclean:
	$(RM) $(OBJ)

fclean: oclean

re: fclean all
