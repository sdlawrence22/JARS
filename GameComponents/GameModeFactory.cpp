#include "GameModeFactory.h"


string GameModeFactory::getMode(){
    return game_mode;
}

Mode GameModeFactory::decideMode(string mode){
    if(mode == "-r"){
        //Return RandomMode class
    }else if( mode == "-m"){
        //return MachineLearningMode class
    }
}