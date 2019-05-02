#ifndef Leaderboard_H_
#define Leaderboard_H_

#include <iostream>
#include <string>
#include <vector>
#include "User.h"
using namespace std;
class Leaderboard
{
	public:
		vector<string> GetUserList();
		void UpdateUserList();
		bool AddUser();
		User FindUser();
	private:


};

#endif /* Leaderboard_H_ */
