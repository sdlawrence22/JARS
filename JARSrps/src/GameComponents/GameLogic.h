#ifndef GameLogic_H_
#define GameLogic_H_

#include <iostream>
#include <string>
#include "CpuPlayer.h"
#include "CpuR.h"
#include "User.h"
#include "Choice.h"
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
	
	private:
	Choice P1Choice;
	Choice P2Choice;
	string winner;
};

#endif /* GameLogic_H_ */
