COMPILE= gcc
FLAGS= -Wall -Wextra -Werror
OBJECTS= *.o
SOURCES= *.c
HEADERS= *.h
NAME= ft_display_file

$(NAME): all

all:
	$(COMPILE) $(FLAGS) $(SOURCES) -o $(NAME)

clean:
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all