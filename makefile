all: classes
	g++ nonrow.cpp class*.o -o nonrow

classes:
	g++ -c class*.cpp
