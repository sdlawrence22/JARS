#ifndef CpuPlayer_H_
#define CpuPlayer_H_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Choice.h"
using namespace std;
class CpuPlayer
{
	public:
	Choice Decision(){
		int CpuChoice = (rand()%3) + 1;

		switch(CpuChoice){
			case 1: cpu = Choice::ROCK; break;
			case 2: cpu = Choice::PAPER; break;
			case 3: cpu = Choice::SCISSOR; break;

		}
		// printf("The cpu chose %i \n", CpuChoice);
		cout<<"The cpu chose "<<cpu<<endl;
		return cpu;
	}
	// int getCpuChoice(){
	// 	Decision();
	// 	return CpuChoice;
	// }

	private:
	// int CpuChoice;
	Choice cpu;
	
};

#endif /* CpuPlayer_H_ */
