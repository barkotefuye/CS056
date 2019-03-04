# Makefile for CS 70 ascii animation Assignment

# ----- Make rules -----

all: run

run: main.o Map.o Player.o Location.o Road.o Game.o
	clang++ -o our-movie -std=c++1z main.o road.o map.o player.o location.o -lstdc++fs

main.o: main.cpp 
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g main.cpp

Road.o: road.cpp road.hpp 
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g Road.cpp 
  
Game.o: game.cpp game.hpp map.hpp player.hpp
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g Game.cpp 

Map.o: map.cpp map.hpp location.hpp road.hpp
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g Map.cpp 
  
Player.o: player.cpp player.hpp location.hpp
	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g Player.cpp
  
Location.o:location.cpp location.hpp road.hpp
    	clang++ -c -Wall -Wextra -pedantic -std=c++1z -g Location.cpp

clean:
	rm -rf *.o *.dSYM run
