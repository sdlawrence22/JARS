#ifndef GameModeFactory_H_
#define GameModeFactory_H_

#include <iostream>
#include <string>
#include "CpuPlayer.h"
#include "Mode.h"

using namespace std;

class GameModeFactory{
    public:
    // GameModeFactory(string mode);
    string getMode();
    Mode decideMode(string mode);

    private:
    string game_mode; 
};

#endif /* GameModeFactory_H_ */