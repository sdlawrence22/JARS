#ifndef CpuFactory_H_
#define CpuFactory_H_

#include <iostream>
#include <string>
#include "CpuPlayer.h"
#include "CpuML.h"
#include "CpuR.h"



using namespace std;

class CpuFactory{
    public:
    // CpuFactory(string mode);
    
    CpuPlayer* decideMode(string mode);

    private:
    string game_mode; 
};

#endif /* CpuFactory_H_ */