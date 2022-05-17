//song.cpp :
//Name - D.G.A.S.Gamage
//Student Id No-IT21307294
 
#include <iostream>
#include <cstring>
#include "song.h"
#include "admin.h"
#include "report.h"

using namespace std;

Song::Song()
{
    Id = 0;
    strcpy(name, "");
}

Song::Song(int id, const char Name[20])
{
    Id = id;
    strcpy(name, Name);
}

void Song::UpdateSongDetails()
{
}

void Song::deletesong()
{
}
void Song::displaysong()
{
}

