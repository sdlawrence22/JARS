#ifndef CpuPlayer_H_
#define CpuPlayer_H_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class CpuPlayer
{
	public:
	void Decision(){
		CpuChoice = (rand()%3) + 1;
		printf("The cpu chose %i \n", CpuChoice);
	}
	int getCpuChoice(){
		Decision();
		return CpuChoice;
	}

	private:
	int CpuChoice;
	
};

#endif /* CpuPlayer_H_ */
