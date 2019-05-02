#include "GameLogic.h"

void GameLogic::CollectInput(User *a, CpuPlayer *b){
    //printf("Here\n");
    // b->Decision();
    // P2Choice = b->choiceGetter();
    P1Choice = a->PlayersPick();
    b->Modifylast5(P1Choice);
    //printf("through\n");
    
}

void GameLogic::SetWinner(User *a){
    // cout<<"we going in here via machine learn?"<<endl;
    if(P1Choice == P2Choice){
        winner = "nobody";
        a->Ties = a->Ties + 1;
    }
    else if(((P1Choice == Choice2::ROCK) && (P2Choice == Choice2::SCISSOR)) ||
     ((P1Choice == Choice2::PAPER) && (P2Choice == Choice2::ROCK)) || 
     ((P1Choice == Choice2::SCISSOR) && (P2Choice == Choice2::PAPER))){
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