#include "Menu.h"

void Menu::MakeDecision(){
    printf("Enter 1-3 ");
    cin >> UserChoice;

    switch(UserChoice){
        case 1: ShowUserInfo(currentuser); break;
        case 2: NewUser(); break;
        case 3: StartGame(); break;
        default: break;
    }
}

void Menu::ShowUserInfo(User a){
    int wins = a.GetWins();
    int losses = a.GetLosses();

    cout<<a.GetUserName();
    printf(" has %i wins and %i losses \n", wins, losses);
}

void Menu::NewUser(){
    cout<<"Enter your name: ";
    string n;
    cin>>n;
    User a;
    a.SetUsername(n);
    a.Wins=0;
    a.Losses=0;
    currentuser = a;
    UserChoice = 0;
}

void Menu::StartGame(){
    GameLogic Test;
    CpuPlayer cpu;
    User P1;
    P1.Wins=0;
    P1.Losses=0;

    for(int i=0;i<3;i++){
        Test.CollectInput(currentuser, cpu);
        Test.SetWinner(currentuser);
        Test.DisplayResults();
    }
}