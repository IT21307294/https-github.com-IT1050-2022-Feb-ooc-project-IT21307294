//nominee.h
//Name- K.V.A.M.Ramsith
//Student ID Number-IT21309274
#pragma once
#include "nominee.h"
#include"account.h"
#include"feedback.h"
#include"award.h"
class Nominee
{
private:
	int NomineeId;
	char name[20];
	char email[20];


public:
	Nominee();

	Nominee(int Nomineeid, const char Name[20], const char email[20]);

	void StoreUpdateDeletenomineeDetails();
	void givefeedbacks();
	void displayNomineeDetails();


	~Nominee();

