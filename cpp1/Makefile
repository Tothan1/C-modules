NAME        = megaphone
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
SRC_FILES   = main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp
OBJ_FILES   = $(SRC_FILES:.cpp=.o)
all: ${NAME}


${NAME} : ${OBJ_FILES}
	@$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp
	@${CXX} ${CXXFLAGS} $(INC) -c $< -o $@

clean:
	@rm -f ${OBJ_FILES} ${BONUS_OBJ_FILES}

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re  
