NAME	=	nanotekspice

CXX	=	g++
CXXFLAGS	=	-std=c++20 -Wall -Wextra

SRC	=	main.cpp \
		src/Parser/Parser.cpp \
		src/Factory/Factory.cpp \
		src/Circuit/Circuit.cpp \
		src/AComponent/AComponent.cpp \
		src/Components/Input.cpp \
		src/Components/Output.cpp \
		src/Components/Clock.cpp \
		src/Components/TrueComponent.cpp \
		src/Components/FalseComponent.cpp

OBJ	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

