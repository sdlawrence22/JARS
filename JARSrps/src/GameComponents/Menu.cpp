#include "Menu.h"

void Menu::MakeDecision(string cmd){
    printf("Enter 1-3 ");
    cin >> UserChoice;

    switch(UserChoice){
        case 1: ShowUserInfo(currentuser); break;
        case 2: NewUser(); break;
        case 3: StartGame(cmd); break;
        default: break;
    }
}

void Menu::ShowUserInfo(User *a){
    int wins = a->GetWins();
    int losses = a->GetLosses();

    cout<<a->GetUserName()<<" has "<<currentuser->Wins<<" wins and "<<currentuser->Losses<<" losses"<<endl;
}

void Menu::NewUser(){
    cout<<"Enter your name: ";
    string n;
    cin>>n;
    currentuser = new User(n, 0, 0);
    UserChoice = 0;
}

void Menu::StartGame(string cmd){
    GameLogic Test;

    if(cmd == "-r"){
        CpuR *rand = new CpuR();
        for(int i = 0; i < 3; i++){
            rand->Decision();
            Test.CollectInput(currentuser, rand);
            Test.SetWinner(currentuser);
            Test.DisplayResults();
        }

    }else if(cmd == "-m"){
        //do something
    }
}