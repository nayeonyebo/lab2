lab2:elo.o main.o elo.h
	g++ -o lab2 elo.o main.o
elo.o:elo.cpp elo.h
	g++ -c elo.cpp
main.o:main.cpp elo.h
	g++ -c main.cpp
