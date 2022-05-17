//report.h
//Name- K.V.A.M.Ramsith
//Student ID Number-IT21309274
#pragma once
#include "report.h"
#include"song.h"
#include"administrator.h"
class Report
{
private:
	int reportId;
public:
	Report();

	Report(int rid);

	void store();
	void displayResults();
	void displayWinners();
	void displaysongs();

	~Report();
};

