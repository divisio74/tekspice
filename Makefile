NAME	=	nanotekspice

CXX	=	g++
CXXFLAGS	=	-std=c++20 -Wall -Wextra

SRC	=	main.cpp \
		src/Parser/Parser.cpp \
		src/Factory/Factory.cpp \
		src/Circuit/Circuit.cpp \
		src/AComponent/AComponent.cpp \
		src/ACompositeComponent/ACompositeComponent.cpp \
		src/Components/Elementary/AndGate.cpp \
		src/Components/Elementary/NotGate.cpp \
		src/Components/Elementary/OrGate.cpp \
		src/Components/Elementary/XorGate.cpp \
		src/Components/Special/Input.cpp \
		src/Components/Special/Output.cpp \
		src/Components/Special/Clock.cpp \
		src/Components/Special/TrueComponent.cpp \
		src/Components/Special/FalseComponent.cpp \
		src/Components/Gates/C4081.cpp \
		src/Components/Gates/C4001.cpp \
		src/Components/Gates/C4011.cpp \
		src/Components/Gates/C4030.cpp \
		src/Components/Gates/C4069.cpp \
		src/Components/Gates/C4071.cpp \
		src/Components/Gates/NorGate.cpp \
		src/Components/Gates/NandGate.cpp \
		src/Components/Advanced/C4008.cpp \
		src/Components/Advanced/C4013.cpp

OBJ	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

