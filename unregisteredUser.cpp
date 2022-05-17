//unregisteredUser.cpp file
//Name - D.G.A.S.Gamage
//Student Id No-IT21307294

#include "unregisteredUser.h"
#include <iostream>
#include <cstring>
#include"feedback.h"
#include"administrator.h"
#include"voter.h"
#include"nominee.h"

using namespace std;

UnregisteredUser::UnregisteredUser()
{
  strcpy(name, "");
  strcpy(dob, "");
	strcpy(address,"");
	strcpy(email, "");
	phoneNo = 0000000000;
	strcpy(password, "");
}

UnregisteredUser::UnregisteredUser(const char unName[], const char unDob[], const char unAddress[],const char unEmail[],const int unPhNo, const char unPassword[])
{
  strcpy(name, unName);
  strcpy(dob, unDob);
	strcpy(address, unAddress);
	strcpy(email, unEmail);
	phoneNo = unPhNo;
	strcpy(password, unPassword);
}

void UnregisteredUser::register()
{
}

void UnregisteredUser::giveFeedback()
{
}


