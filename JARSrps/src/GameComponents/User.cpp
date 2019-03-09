#include "User.h"

string User::GetUserName(){
    return Username;
}

void User::SetUsername(string a){
    Username = a;
}

int User::GetWins(){
    return Wins;
}

void User::IncrementWins(){
    Wins += 1;
}

void User::IncrementLosses(){
    Losses += 1;
}

int User::GetLosses(){
    return Losses;
}

int User::RPS(){
    int RPS;
    printf("Enter 1, 2, or 3 for rock, paper, scissors respectively \n");
    cin >> RPS;
    return RPS;
}