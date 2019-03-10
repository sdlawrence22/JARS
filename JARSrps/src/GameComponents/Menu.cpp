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

    cout<<a->GetUserName();
    printf(" has %i wins and %i losses \n", wins, losses);
}

void Menu::NewUser(){
    cout<<"Enter your name: ";
    string n;
    cin>>n;
    User *a;
    a->SetUsername(n);
    a->Wins=0;
    a->Losses=0;
    currentuser = a;
    UserChoice = 0;
}

void Menu::StartGame(string cmd){
    GameLogic Test;
    User P1;
    P1.Wins=0;
    P1.Losses=0;

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
    // for(int i=0;i<3;i++){
    //     Test.CollectInput(currentuser, cpu);
    //     Test.SetWinner(currentuser);
    //     Test.DisplayResults();
    // }
    // CpuPlayer cpu;
    // User P1;
    
}