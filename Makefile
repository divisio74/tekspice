NAME	=	nanotekspice

CXX	=	g++
CXXFLAGS	=	-std=c++20 -Wall -Wextra

SRC	=	main.cpp \
		src/Parser/Parser.cpp \
		src/Factory/Factory.cpp \
		src/Circuit/Circuit.cpp \
		src/AComponent/AComponent.cpp \
		src/Components/Special/Input.cpp \
		src/Components/Special/Output.cpp \
		src/Components/Special/Clock.cpp \
		src/Components/Special/TrueComponent.cpp \
		src/Components/Special/FalseComponent.cpp

OBJ	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

