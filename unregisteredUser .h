//unregisteredUser.h file
//Name - D.G.A.S.Gamage
//Student Id No-IT21307294

#include"feedback.h"
#include"administrator.h"
#include"voter.h"
#include"nominee.h" 
#include"unregisteredUser.h"

class UnregisteredUser
{
protected:
	char name[40];
	char dob [10];
	char address [50];
	char email [35];
	int phoneNo;
	char password [30];

public:
	UnregisteredUser();
	UnregisteredUser(const char unName[], const char unDob[], const char unAddress[], const char unEmail[],char const unPhNo[], char const unPassword[]);
	void register();
	void giveFeedback();
	~UnregisteredUser();

};
