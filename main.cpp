#include <iostream>

using namespace std;

#include "administrator.h"
#include "unregisteredUser.h"
#include "voter.h"
#include "nominee.h"
#include "account.h"
#include "feedback.h"
#include "award.h"
#include "winner.h"
#include "song.h"
#include "report.h"

int main(void)
{
	Administrator* admin;
	UnregisteredUser* unregUse;
	Voter* voter;
	Nominee* nomi;
	Account* acc;
	Feedback* feed;
	Award* award;
	Winner* winner;
	Song* song;
	Report* report;
	
	admin = new Administrator("001", "Amal");
	unregUse = new UnregisteredUser("Malaka","1999/03/12", "No122/Kandy road/ Kalaniya","malaka123@gamil.com", 0711232234 , "mala234@", );
	voter =new  Voter("V001","Malaka","Male");
	nomi = new Nominee("N001", "Wenura","wenura12@gmail.com");
	acc = new Account("ACC001");
	feed = new Feedback("F001");
	award = new Award("A001", "Best Male Artist");
	winner = new Winner("W001","Saman", "Male", "Best Male Artist");
	song = new Song("S001", "Ciao Malli");
	report = new Report("R001");
	
	delete admin;
	delete unregUse;
	delete voter;
	delete nomi;
	delete acc;
	delete feed;
	delete award;
	delete winner;
	delete song;
	delete report;
	
	return 0;

}
