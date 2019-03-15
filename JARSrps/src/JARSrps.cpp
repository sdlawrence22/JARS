//============================================================================
// Name        : JARSrps.cpp
// Author      : JARS
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "GameComponents/Menu.h"
#include "GameComponents/CpuPlayer.h"
#include "GameComponents/FileManager.h"
#include "GameComponents/CpuPlayer.h"
#include "GameComponents/CpuR.h"
#include "GameComponents/CpuML.h"
using namespace std;

int main(int argc, char* argv[]) {
	Menu a;
	string command(argv[1]);
	
	while(1){
		printf("Please press 1 first to store name, then 2 to begin game, and 3 to see the result\n");
		a.MakeDecision(command);
	}

	return 0;
}
