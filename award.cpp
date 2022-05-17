//award.cpp file
//Name-M.G.D.Shehara
//Student Id No - IT21305078

#include <iostream>
#include<cstring>
#include "award.h"
#include"administrator.h"
#include"winner.h"


using namespace std;

Award :: Award()
{
    strcpy(awardId, "");
    strcpy(name, "");
    
}

Award :: Award(const char id[], const char awardName[])
{
    strcpy(awardId, id);
    strcpy(name, awardName);

    
}

void Award:: storedetails()
{
}

void Award:: updateawarddetails()
{
}

void Award:: deleteawarddetails()
{
}

void Award::displayawarddetails()
{
}
Award :: ~Award()
{
}

