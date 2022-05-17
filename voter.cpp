 //voter.cpp : 
//Name-M.G.D.Shehara
//Student Id No - IT21305078


#include <iostream>
#include<cstring>
#include "voter.h"
#include"feedback.h"
#include"nominee.h"
using namespace std;

voter::voter() {
	Userid = 0;
	strcpy(name, "");
	strcpy(gender, "");

}
voter::voter(int userid, char Name[20], char Gender[10])
{
	Userid = userid;
	strcpy(name, Name);
	strcpy(gender, Gender);
}
void voter::updateDetails()
{
}
void voter::deleteAccount()
{
}
void voter::viewResults();
{
}
void voter::giveFeedback();
{
}

