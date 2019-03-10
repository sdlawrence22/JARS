output: JARSrps.o Menu.o User.o GameLogic.o
	g++ JARSrps.o Menu.o User.o GameLogic.o -o output 

JARSrps.o: JARSrps.cpp
	g++ -c JARSrps.cpp

Menu.o: GameComponents/Menu.cpp GameComponents/Menu.h
	g++ -c GameComponents/Menu.cpp

User.o: GameComponents/User.cpp GameComponents/User.h
	g++ -c GameComponents/User.cpp

GameLogic.o: GameComponents/GameLogic.cpp GameComponents/GameLogic.h
	g++ -c GameComponents/GameLogic.cpp

clean: 
	rm *.o output 