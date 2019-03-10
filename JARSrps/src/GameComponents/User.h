#ifndef User_H_
#define User_H_

#include <iostream>
#include <string>
#include "Choice.h"
using namespace std;
class User
{
	public:
	string GetUserName();
	void SetUsername(string a);
		// Username = a;

	int GetWins();
	void IncrementWins();
	void IncrementLosses();
	int GetLosses();
	//TODOs:
	int GetWinStreak();
	bool SetWinStreak();
	int GetHighestStreak();
	bool SetHighestStreak();
	void CheckStreak();

	// int RPS();
	Choice PlayersPick();
	
	int Wins;
	int Losses;
	private:
	string Username;

	int Wintreak;
	int HighestWinStreak;

	
};

#endif /* User_H_ */
