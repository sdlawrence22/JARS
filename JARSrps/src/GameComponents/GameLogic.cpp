#include "GameLogic.h"

void GameLogic::CollectInput(User a, CpuPlayer b){
    P1Choice = a.RPS();
    P2Choice = b.getCpuChoice();
}

void GameLogic::SetWinner(User &a){
    if(P1Choice == P2Choice){
        winner = "nobody";
    }
    else if(((P1Choice == 1) && (P2Choice == 3)) ||
     ((P1Choice == 2) && (P2Choice == 1)) || 
     ((P1Choice == 3) && (P2Choice == 2))){
        winner = "Player 1";
        a.IncrementWins();
    }
    else{
        a.IncrementLosses();
        winner = "the CPU";

    }
}

void GameLogic::DisplayResults(){
    printf("The winner was ");
    cout<<winner<<endl;
}