//voter.h file
//Name-M.G.D.Shehara
//Student Id No - IT21305078

#include"voter.h"
#include "feedback.h"
#include"nominee.h"
class Voter
{
private:
	int Userid;
	char name[20];
	char gender[10];
public:
	voter();
	voter(int userid, char Name[20], char Gender[10]);
	void updateDetails();
	void deleteAccount();
	void reportissue();
	void viewResults();
	void giveFeedback();

	~voter();
};
