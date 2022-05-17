//Name-Hansali Ranradhi Jayathilaka
//IT Number-IT21308352

#include <iostream>
#include<cstring>
#include "winner.h"
#include "report.h"
#include "award.h"


using namespace std;

Winner::Winner()
{
    strcpy(nomineeId, "");
    strcpy(name, "");
    strcpy(nomineeGender, "");
    strcpy(aName, "");
}

Winner::Winner(const char nomineeid[], const char nomineeName[], const char nomineegender[], const char awardName[])
{
    strcpy(nomineeId, id);
    strcpy(name, nomineeName);
    strcpy(nomineeGender, gender);
    strcpy(aName, awardName);

}

void Winner::storeDetails()
{
}

void Winner::updateDetails()
{
}

void Winner::deleteWinnerdetails()
{
}

void Winner::displayWinnerdetails()
{
}

Winner :: ~Winner()
{
}

