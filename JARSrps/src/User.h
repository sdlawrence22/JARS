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
	}
	void IncrementLosses(){
		Losses +=1;
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

	private:
	string Username;
	int Wins;
	int Losses;
	int Wintreak;
	int HighestWinStreak;

	
};

#endif /* User_H_ */
