#include "User.h"

User::User(string name, int victory, int fatL) : Username(name), Wins(victory), Losses(fatL){}

string User::GetUserName(){
    return Username;
}

void User::SetUsername(string a){
    Username = a;
    // cout<<"are we going here"<<endl;
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

Choice User::PlayersPick(){
    while(true){
        printf("Enter 1, 2, or 3 for rock, paper, scissors respectively \n");
        int RPS;
        cin >> RPS;
        switch(RPS){
            case 1: return Choice::ROCK;
            case 2: return Choice::PAPER;
            case 3: return Choice::SCISSOR;
            default: printf("Please make a valid choice\n");
        }
        cin.clear();
        cin.ignore();
    }
}

// int User::RPS(){
//     int RPS;
//     printf("Enter 1, 2, or 3 for rock, paper, scissors respectively \n");
//     cin >> RPS;
//     return RPS;
// }