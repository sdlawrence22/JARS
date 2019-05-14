#include "User.h"
User::User(int victory, int losses, int ties) : Wins(victory), Losses(losses), Ties(ties){}

string User::GetUserName(){
    return Username;
}
void User::clear(){
    Wins = 0;
    Losses = 0;
    Ties = 0;
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

Choice2 User::PlayersPick(){
    //while(true){
        //printf("Enter 1, 2, or 3 for rock, paper, scissors respectively \n");
        // int RPS;
        // cin >> RPS;
        //printf("Waiting for input %i\n", decision);
        switch(decision){
            case 1: return Choice2::ROCK;
            case 2: return Choice2::PAPER;
            case 3: return Choice2::SCISSOR;
            default: printf("Please make a valid choice\n");
        }
        //cin.clear();
        //cin.ignore();
    //}
}

// int User::RPS(){
//     int RPS;
//     printf("Enter 1, 2, or 3 for rock, paper, scissors respectively \n");
//     cin >> RPS;
//     return RPS;
// }