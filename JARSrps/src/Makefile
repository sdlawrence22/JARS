output: JARSrps.o Menu.o User.o GameLogic.o FileManager.o 
	g++ JARSrps.o Menu.o User.o GameLogic.o FileManager.o -o output 

JARSrps.o: JARSrps.cpp
	g++ -std=c++11 -c JARSrps.cpp

Menu.o: GameComponents/Menu.cpp GameComponents/Menu.h
	g++ -std=c++11 -c GameComponents/Menu.cpp

User.o: GameComponents/User.cpp GameComponents/User.h
	g++ -std=c++11 -c GameComponents/User.cpp

GameLogic.o: GameComponents/GameLogic.cpp GameComponents/GameLogic.h
	g++ -std=c++11 -c GameComponents/GameLogic.cpp

FileManager.o: GameComponents/FileManager.cpp GameComponents/FileManager.h
	g++ -std=c++11 -c GameComponents/FileManager.cpp

clean: 
	rm *.o output 