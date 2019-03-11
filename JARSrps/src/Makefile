output: JARSrps.o Menu.o User.o GameLogic.o FileManager.o CpuPlayer.o CpuR.o CpuML.o
	g++ JARSrps.o Menu.o User.o GameLogic.o FileManager.o CpuPlayer.o CpuR.o CpuML.o -o output 

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

CpuPlayer.o: GameComponents/CpuPlayer.cpp GameComponents/CpuPlayer.h
	g++ -std=c++11 -c GameComponents/CpuPlayer.cpp

CpuR.o: GameComponents/CpuR.cpp GameComponents/CpuR.h
	g++ -std=c++11 -c GameComponents/CpuR.cpp

CpuML.o: GameComponents/CpuML.cpp GameComponents/CpuML.h
	g++ -std=c++11 -c GameComponents/CpuML.cpp

clean: 
	rm *.o output 