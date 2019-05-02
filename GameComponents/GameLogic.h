#ifndef GameLogic_H_
#define GameLogic_H_

#include <iostream>
#include <string>
#include "CpuPlayer.h"
#include "CpuR.h"
#include "CpuML.h"
#include "User.h"
#include "Choice2.h"
using namespace std;

class GameLogic
{
	public:
	void CollectInput(User *a, CpuPlayer *b);
	void SetWinner(User *a);
	void DisplayResults();
	bool UpdateUserRecord();
	bool UpdateLB();
	bool PlayAgain();
	Choice2 P1Choice;
	Choice2 P2Choice;
	string winner;
	private:
	
};

#endif /* GameLogic_H_ */
