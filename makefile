all: classes
	g++ window.cpp -o window -lncurses

classes:
	g++ -c window.cpp
