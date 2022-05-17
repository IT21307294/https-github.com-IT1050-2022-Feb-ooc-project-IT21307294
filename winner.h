//Name-Hansali Ranradhi Jayathilaka
//IT Number-IT21308352


#include "winner.h"
#include "report.h"
#include "award.h"

class Winner
{
private:
	char nomineeId[11];
	char name[28];
	char nomineeGender[12];
	char aName[6];




public:
	nominee();

	nominee (const char nomineeid[], const char name[],const char nomineeGender[],const char aName[]);

	void storedetails();
	void Updatedetails();
	void DeleteWinnerdetails();
	void DisplayWinnerdetails();

	~nominee();
};

