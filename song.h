//song.h file
// Name- D.G.A.S.Gamage
//Student Id No-IT21307294

#pragma once
#include "aong.h"
#include "admin.h"
#include "report.h"

class Song
{
private:
	int Id;
	char name[20];

public:
	Song();

	Song(int id, const char Name[20]);

	void UpdateSongDetails();
	void deletesong();
	void displaysong();
	~Song();
