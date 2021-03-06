#ifndef CpuPlayer_H_
#define CpuPlayer_H_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Choice2.h"
#include "FileManager.h"
using namespace std;

class CpuPlayer
{
	public:
	void choiceSetter(Choice2 ch){
		cpu = ch;
	}

	Choice2 choiceGetter(){
		return cpu;
	}

	virtual void Decision(){
		//subclasses will set cpu by overwritting this
	}
	virtual void Modifylast5(Choice2 lastchoice){
		//only simple ml uses this for now
	}
	int last_choice;
	private:
	Choice2 cpu;
	
};

#endif /* CpuPlayer_H_ */
