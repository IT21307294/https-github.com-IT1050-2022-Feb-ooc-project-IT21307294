//award.h
//Name-M.G.D.Shehara
//Student Id No - IT21305078

#include "award.h"
#include"administrator.h"
#include"winner.h"

class Award
{
private:
	char awardId[11];
	char name[28];

public:
	Award();

	Award(const char id[], const char awardName[]);

	void storeawarddetails();
	void Updateawarddetails();
	void Deleteawarddetails();
	void Displayawarddetails();

	~Award();
};

