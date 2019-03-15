#ifndef CpuPlayer_H_
#define CpuPlayer_H_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Choice.h"
#include "FileManager.h"
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
		//subclasses will set cpu by overwritting this
	}
	virtual void Modifylast5(Choice lastchoice){
		//only simple ml uses this for now
	}

	private:
	Choice cpu;
	
};

#endif /* CpuPlayer_H_ */
