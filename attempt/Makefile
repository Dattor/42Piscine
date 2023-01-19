NAME = StringUP

CFLAGS += -Wall -Werror -Wextra

SOURCES = strup.c \
		  strupm.c

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	cc -o $(NAME) $(OBJECTS)