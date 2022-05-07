//
// Created by Michele Maragliano on 07/05/22.
//

#include "lib.h"
using namespace std;

bool verificatore(char a)
{
    if((a>64 && a<91) || (a>96 && a<123))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char convertitore(char a)
{
    if(a>64 && a<91)
    {
        return a+32;
    }
    else if(a>96 && a<123)
    {
        return a-32;
    }
}
