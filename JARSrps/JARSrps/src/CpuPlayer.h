#ifndef CpuPlayer_H_
#define CpuPlayer_H_

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

using namespace std;
class CpuPlayer
{
	public:
	string playerChoices;
	bool AIOn;
	vector <string> decisionsList;

	void Decision(){
		if(AIOn==false){
		CpuChoice = (rand()%3) + 1;
		printf("The cpu chose %i \n", CpuChoice);
		}
		else{
			//TODO MACHINE LEARNING DECISION

		}
	}

	int getCpuChoice(){
		Decision();
		return CpuChoice;
	}

	void setList(){
		ifstream myFile("gg.txt");
		string inputLine;
		if(myFile.is_open()){
			while(getline(myFile, inputLine)){
				decisionsList.push_back(inputLine);
			}
		}
		else{
			cout<<"Can't open gg.txt"<<endl;
		}

	}


	private:
	int CpuChoice;
	
};

#endif /* CpuPlayer_H_ */
