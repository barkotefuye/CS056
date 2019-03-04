# Makefile for CS 70 ascii animation Assignment

# ----- Make rules -----

all: run

run: main.o map.o player.o location.o road.o game.o
	clang++ -o our-movie -std=c++1z main.o road.o map.o player.o location.o -lstdc++fs

main.o: main.cpp 
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g main.cpp

road.o: road.cpp road.hpp 
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g road.cpp 
  
game.o: game.cpp game.hpp map.hpp player.hpp
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g game.cpp 

map.o: map.cpp map.hpp location.hpp road.hpp
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g map.cpp 
  
player.o: player.cpp player.hpp location.hpp
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g player.cpp
  
location.o:location.cpp location.hpp road.hpp
    	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g location.cpp

clean:
	rm -rf *.o *.dSYM run
