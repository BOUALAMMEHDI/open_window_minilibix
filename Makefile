MINILIBX_PATH   =       ./libraries/minilibx
MINILIBX                =       $(MINILIBX_PATH)/libmlx.a

SOURCES_FILES =	main.c utils.c

HEADER = main.h

OBJECTS	= main.o utils.o 

NAME = app

CC = gcc
RM = rm -rf

CFLAGS = -Wall -Wextra -Werror
MLXFLAGS = -L. -lXext -L. -lX11

all:$(NAME)

$(NAME) : $(MINILIBX) $(OBJECTS) $(HEADER)
		$(CC) $(CFLAGS) $(OBJECTS) $(MINILIBX) $(MLXFLAGS) -o $(NAME)

$(MINILIBX):
	$(MAKE) -C $(MINILIBX_PATH)

clean :
	$(MAKE) -C $(MINILIBX_PATH) clean
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)
re : fclean all

