//Name-Hansali Ranradhi Jayathilaka
//IT Number-IT21308352



#include "unregistredUser.h"
#include "account.h"
#include "nominee.h"
#include "voter.h"
#include "administrator.h"

class Account
{
private:
	char accountId[8];
	


public:
	Account ();

	Account (const char id[]);

	void Createaccount();
	void updateaccount();
	void Deleteaccount();

	~Account();
};

