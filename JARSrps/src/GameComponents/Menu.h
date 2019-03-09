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
	void MakeDecision();
	void ShowUserInfo(User a);
	void NewUser(string name);
	void StartGame();

	private:
	int UserChoice;
	User currentuser;
};

#endif /* Menu_H */
