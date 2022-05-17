//administraor.h file
//Name - E.G.S.S. Gunasinghe
//Student ID No - IT21312076
#include "unregistredUser.h"
#include"account.h"
#include"report.h"
#include"voter.h"

class Administrator
{
private:
	char adminId[10];
	char name[20];


public:
	Administrator();

	Administrator(const char id[], const char adminName[]);

	void manageNominee();
	void manageVoters();
	void manageAwards();
	void manageReports();
	void manageIssues();
	void manageSongs();

	~Administrator();
};

