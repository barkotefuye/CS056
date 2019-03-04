all: game.o map.o location.o road.o player.o,  exercise05 exercise06 exercise07 exercise08 exercise09

exercise01: exercise01.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise01 exercise01.cpp

exercise02: exercise02.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise02 exercise02.cpp

exercise03: exercise03.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise03 exercise03.cpp

exercise04: exercise04.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise04 exercise04.cpp

exercise05: exercise05.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise05 exercise05.cpp

exercise06: exercise06.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise06 exercise06.cpp

exercise07: exercise07.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise07 exercise07.cpp

exercise08: exercise08.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise08 exercise08.cpp

exercise09: exercise09.cpp
	clang++ -g -std=c++1z -pedantic -Wall -Wextra -o exercise09 exercise09.cpp

clean:
	rm -rf exercise01 exercise02 exercise03 exercise04 exercise05 exercise06 exercise07 exercise08 exercise09 *.dSYM
