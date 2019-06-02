.PHONY: clean $(NAME) fclean re all

CC		=	clang++

FLAG	=	-Wall -Wextra -Werror -lncurses

NAME    =	ft_gkrellm

SRC     =   main.cpp \
			Modules/Hostname.cpp \
			Modules/IMonitorModule.cpp \
			Modules/Date.cpp \
			Modules/OsInfo.cpp \
			Modules/Username.cpp	\
			IMonitorDisplay.cpp	
	
            
OBJ     =	$(patsubst srcs/%.cpp,obj/%.o,$(SRC))

INCLUDE	=	Modules/Hostname.hpp \
			Modules/IMonitorModule.hpp \
			Modules/Date.hpp \
			Modules/OsInfo.hpp \
			Modules/Username.hpp \
			IMonitorDisplay.hpp

			
all: $(NAME) 

$(NAME): $(OBJ) $(INCLUDE)
		$(CC) $(FLAG) $(OBJ) -o $(NAME)

obj/%.o: srcs/%.cpp
		mkdir -p obj
		$(CC) $(FLAG) -c $< -o $@

clean:
		/bin/rm -rf obj/

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

test: re
		./$(NAME)

all: $(NAME)
