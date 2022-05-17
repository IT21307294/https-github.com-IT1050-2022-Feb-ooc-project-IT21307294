//Name-Hansali Ranradhi Jayathilaka
//IT Number-IT21308352

#include <iostream>
#include <cstring>
#include "unregistredUser.h"
#include "account.h"
#include "nominee.h"
#include "voter.h"
#include "administrator.h"


using namespace std;

Account :: Account()
{
    strcpy(accountId, "");
    
}

Account::Account(const char id[])
{
    strcpy(accountId, id);
    
}

void Account :: Create account ()
{
}

void Account :: update account ()
{
}

void Account :: Delete account ()
{
}


Account:: ~Account()
{
}

