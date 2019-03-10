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
using namespace std;

int main(int argc, char* argv[]) {

	Menu a;
	string command(argv[1]);
	
	while(1){
		printf("Please press 2 first to store name, then 3 to begin game, and 1 to see the result\n");
		a.MakeDecision(command);
	}
	FileManager fm;
	fm.createGG();

	return 0;
}

// for(int i = 0; i < argc; ++i){
	// 	cout<<"this is the command: "<<argv[i]<<"\n";
	// }
	// string command(argv[1]);
	
	// if(command == "-r"){
	// 	cout<<"random"<<endl;
	// }else if(command == "-m"){
	// 	cout<<"marchine learning"<<endl;
	// }