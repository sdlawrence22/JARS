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
	void choiceSetter(Choice ch){
		cpu = ch;
	}

	Choice choiceGetter(){
		return cpu;
	}

	virtual void Decision(){
		
	}

	private:
	Choice cpu;
	
};

#endif /* CpuPlayer_H_ */
