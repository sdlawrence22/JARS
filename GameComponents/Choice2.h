#ifndef CHOICE2_H_
#define CHOICE2_H_

#include <iostream>
using namespace std;

enum class Choice2
{
    ROCK, PAPER, SCISSOR, INVALID
};

inline ostream& operator <<(ostream& ostr, const Choice2 choice2){
    switch(choice2)
    {
        case Choice2::ROCK:          ostr<<"Rock";       break;
        case Choice2::PAPER:         ostr<<"Paper";      break;
        case Choice2::SCISSOR:       ostr<<"Scissors";   break;
        case Choice2::INVALID:       ostr<<"Invalid";    break;
        default: break;
    }
    return ostr;
}

#endif /* CHOICE2_H_ */