// administrator.cpp : 
//Name - E.G.S.S. Gunasinghe
//Student ID - IT21312076

#include <iostream>
#include<cstring>
#include "administrator.h"
#include"report.h"
#include"voter.h"

using namespace std;

Administrator :: Administrator()
{
    strcpy(adminId, "");
    strcpy(name, "");
}

Administrator::Administrator(const char id[], const char adminName[])
{
    strcpy(adminId, id);
    strcpy(name, adminName);
}

void Administrator::manageNominee()
{
}

void Administrator::manageVoters()
{
}

void Administrator::manageAwards()
{
}

void Administrator::manageReports()
{
}

void Administrator::manageIssues()
{
}

Void Administrator::manageSongs()
{
}

Administrator:: ~ Administrator()
{
}


