#ifndef GameLogic_H_
#define GameLogic_H_

#include <iostream>
#include <string>
#include "CpuPlayer.h"
#include "User.h"
using namespace std;
class GameLogic
{
	public:
	void CollectInput(User a, CpuPlayer b){
		P1Choice = a.RPS();
		P2Choice = b.getCpuChoice();
	}
	void SetWinner(){
		if(P1Choice == P2Choice) winner = "nobody";
		else if(((P1Choice == 0) && (P2Choice == 2))|| ((P1Choice == 1) && (P2Choice == 0)) || ((P1Choice == 2) && (P2Choice == 1))){
			winner = "Player 1";
		}
		else{
			winner = "the CPU";
		}
	}
	void DisplayResults(){
		printf("The winner was ");
		cout<<winner<<endl;
		printf("The cpu chose %i \n", P2Choice);
	}
	bool UpdateUserRecord();
	bool UpdateLB();
	bool PlayAgain();
	private:
	int P1Choice;
	int P2Choice;
	string winner;
	
};

#endif /* GameLogic_H_ */
