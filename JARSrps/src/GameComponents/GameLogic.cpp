#include "GameLogic.h"

void GameLogic::CollectInput(User *a, CpuPlayer *b){
    P1Choice = a->PlayersPick();
    b->Decision();
    P2Choice = b->choiceGetter();
    b->Modifylast5(P1Choice);
    
}

void GameLogic::SetWinner(User *a){
    // cout<<"we going in here via machine learn?"<<endl;
    if(P1Choice == P2Choice){
        winner = "nobody";
    }
    else if(((P1Choice == Choice::ROCK) && (P2Choice == Choice::SCISSOR)) ||
     ((P1Choice == Choice::PAPER) && (P2Choice == Choice::ROCK)) || 
     ((P1Choice == Choice::SCISSOR) && (P2Choice == Choice::PAPER))){
        winner = "Player 1";
        a->IncrementWins();
    }
    else{
        a->IncrementLosses();
        winner = "the CPU";

    }
}

void GameLogic::DisplayResults(){
    printf("The winner was ");
    cout<<winner<<endl;
    
}