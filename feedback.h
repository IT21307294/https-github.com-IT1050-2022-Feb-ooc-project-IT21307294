//feedback.h file
//Name - E.G.S.S.Gunasinghe
//Student Id No- IT21312076

#include"nominee.h"
#include"voter.h"
#include"feedback.h"

class Feedback
{
private:
	int Feedbackid;
public:
	Feedback();
	Feedback(int fid);
	void store();
	void display();
	~Feedback();
};
