//nominee.cpp 
//Name-K.V.A.M.Ramsith
//Student ID Number-IT21309274

#include <iostream>
#include<cstring>
#include "nominee.h"
#include"account.h"
#include"feedback.h"
#include"award.h"

using namespace std;

Nominee::Nominee()
{
    NomineeId = 0;
    strcpy(name, "");
    strcpy(email, "");
}

Nominee::Nominee(int nid, const char Name[20], const char Email[20])
{
    NomineeId = nid;
    strcpy(name, Name);
    strcpy(email, Email);
}

void Nominee::StoreUpdateDeletenomineeDetails()
{
}

void Nominee::givefeedbacks()
{
}
void Nominee::displayNomineeDetails()
{
}


