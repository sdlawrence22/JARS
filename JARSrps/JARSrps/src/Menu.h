#ifndef Menu_H_
#define Menu_H_

#include <iostream>
#include <string>
#include "User.h"
#include "GameLogic.h"
using namespace std;
class Menu
{
	public:
	void MakeDecision(){
		printf("Enter 1-3");
		cin >> UserChoice;
		if(UserChoice == 1){
				ShowUserInfo(currentuser);
		}
		else if(UserChoice == 2){
				printf("Enter a name");
				string a;
				cin >> a;
				NewUser(a);
				}
		else if(UserChoice == 3){
				StartGame();
				}
	}

	void ShowUserInfo(User a){
		int wins = a.GetWins();
		int losses = a.GetLosses();

		cout<<a.GetUserName();
		printf(" has %i wins and %i losses \n", wins, losses);
	}
	void NewUser(string name){
		User a;
		a.SetUsername(name);
		a.Wins=0;
		a.Losses=0;
		currentuser = a;
		UserChoice = 0;
	}
	void StartGame(){
		GameLogic Test;
		CpuPlayer cpu;
		User P1;
		P1.Wins=0;
		P1.Losses=0;
		for(int i=0;i<20;i++){
		Test.CollectInput(currentuser, cpu);
		Test.SetWinner(currentuser);
		Test.DisplayResults();
		}

	}
	private:
	int UserChoice;
	User currentuser;
	
};

#endif /* Menu_H */
