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
	// void NewUser(string name);
	void NewUser();
	void StartGame(string cmd);

	private:
	int UserChoice;
	User *currentuser;
};

#endif /* Menu_H */
