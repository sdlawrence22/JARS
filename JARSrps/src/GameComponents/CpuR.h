#ifndef CpuR_H_
#define CpuR_H_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Choice.h"
#include "CpuPlayer.h"
using namespace std;

class CpuR : public CpuPlayer
{
	public:
	void Decision(){
		int CpuChoice = (rand()%3) + 1;

		switch(CpuChoice){
			case 1: choiceSetter(Choice::ROCK); break;
			case 2: choiceSetter(Choice::PAPER); break;
			case 3: choiceSetter(Choice::SCISSOR); break;

		}
	}
	void test(){
		cout<<"testing that we can access";
	}

	// private:
	// Choice cpu;
	
};

#endif /* CpuR_H_ */
