#ifndef CHOICE_H_
#define CHOICE_H_

#include <iostream>
using namespace std;

enum class Choice
{
    ROCK, PAPER, SCISSOR, INVALID
};

inline ostream& operator <<(ostream& ostr, const Choice choice){
    switch(choice)
    {
        case Choice::ROCK:          ostr<<"Rock";       break;
        case Choice::PAPER:         ostr<<"Paper";      break;
        case Choice::SCISSOR:       ostr<<"Scissors";   break;
        case Choice::INVALID:       ostr<<"Invalid";    break;
        default: break;
    }
    return ostr;
}

#endif /* CHOICE_H_ */