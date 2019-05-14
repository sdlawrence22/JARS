#include "CpuFactory.h"

CpuPlayer* CpuFactory::decideMode(string mode){
    if(mode == "-r"){
        printf("Generated Random Player\n");
        //CpuPlayer 
        return new CpuR();
    }else if( mode == "-m"){
        printf("Generated Pro Player\n");
        //return MachineLearningMode object
        return new CpuML();
    }
}