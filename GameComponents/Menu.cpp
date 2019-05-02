#include "Menu.h"
using namespace std;
void Menu::MakeDecision(string cmd, int round){
    round_count = round;
    if(firsttime == true){
        UserChoice = 1;
        firsttime = false;
    }
    else{
        //printf("Enter 1-3 ");
        //cin >> UserChoice;
    }
    switch(2){      //was UserChoice
        case 1: NewUser(); break;       
        case 2: StartGame(cmd); break;
        case 3: ShowUserInfo(currentuser); break;
        default: break;
    }
    cin.clear();
    cin.ignore();
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
  //  currentuser = new User(n, 0, 0);
    UserChoice = 0;
}

void Menu::StartGame(string cmd){
    GameLogic Test;

    if(cmd == "-r"){
        CpuR *rand = new CpuR();
        for(int i = 0; i < round_count; i++){
            
            Test.CollectInput(currentuser, rand);
            Test.SetWinner(currentuser);
            Test.DisplayResults();
        }

    }else if(cmd == "-m"){
        CpuML *mlearn = new CpuML();
        for(int i = 0; i < round_count; i++){
            
            Test.CollectInput(currentuser, mlearn);
            Test.SetWinner(currentuser);
            Test.DisplayResults();
        }
    }
}

void Menu::Setfirsttime(bool logic){
    firsttime = logic;
}