#ifndef User_H_
#define User_H_

#include <iostream>
#include <string>
#include "Choice2.h"
using namespace std;
class User
{
	public:
	User(int victory, int losses, int ties);
	string GetUserName();
	void SetUsername(string a);
	int GetWins();
	void clear();
	void IncrementWins();
	void IncrementLosses();
	int GetLosses();
	Choice2 PlayersPick();
	//TODOs:
	int GetWinStreak();
	bool SetWinStreak();
	int GetHighestStreak();
	bool SetHighestStreak();
	void CheckStreak();
	int decision;
	// int RPS();
	int Wins;
	int Losses;
	int Ties;
	private:
	string Username;
	int Wintreak;
	int HighestWinStreak;

	
};

#endif /* User_H_ */
