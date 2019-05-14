#include "Choice.h"
#include <iostream>
#include <string>

wxString choice_to_wxString(Choice choice)
{
    switch (choice)
    {
        case ROCK:     return "Rock";
        case PAPER:    return "Paper";
        case SCISSORS: return "Scissors";
        default:       return "none";
    }
}

wxString int_to_wxString(int INT)
{
    //printf("The int is %i\n", INT);
    return std::to_wstring(INT);
}