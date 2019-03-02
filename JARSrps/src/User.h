#ifndef User_H_
#define User_H_

#include <iostream>
#include <string>
using namespace std;
class User
{
	public:
	string GetUserName(){
		return Username;
	}
	void SetUsername(string a){
		Username = a;
	}
	int GetWins(){
		return Wins;
	}
	void IncrementWins(){
		Wins +=1;
		//printf("You have won %i times \n", Wins);
	}
	void IncrementLosses(){
		Losses +=1;
		//printf("You have lost %i times \n", Losses);
	}
	int GetLosses(){
		return Losses;
	}
	int GetWinStreak();
	bool SetWinStreak();
	int GetHighestStreak();
	bool SetHighestStreak();
	void CheckStreak();
	int RPS(){
		int RPS;
		printf("Enter 1, 2, or 3 for rock, paper, scissors respectively \n");
		cin >> RPS;
		return RPS;
	}
	int Wins;
	int Losses;
	private:
	string Username;

	int Wintreak;
	int HighestWinStreak;

	
};

#endif /* User_H_ */
