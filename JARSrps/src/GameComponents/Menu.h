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
	void MakeDecision(string cmd);
	void ShowUserInfo(User *a);
	// User* getCurrentUser();
	// void NewUser(string name);
	void NewUser();
	void StartGame(string cmd);
	void Setfirsttime(bool logic);

	private:
	int UserChoice;
	User *currentuser;
	bool firsttime;
};

#endif /* Menu_H */
