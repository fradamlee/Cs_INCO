#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>

#include "userInterface.hpp"
#include "playlist.hpp"
#include "song.hpp"

Song::Song() {}

void Song::initSong(char const *_ranking, char const *_song, char const *_author, char const *_singer, char const *_file)
{
    sIterms[0] = _ranking;
    sIterms[1] = _song;
    sIterms[2] = _author;
    sIterms[3] = _singer;
    sIterms[4] = _file;
}

int Song::compareString(const string &searchedWord, const int &column)
{
    // Si considera que la palabra buscada esta antes devolverá -1
    // Si considera que la palabra buscada esta después devolverá 1
    // Si coicide la búsqueda devolverá 0
    string selectedString = sIterms[column];
    for (int i = 0; searchedWord.length() > i && selectedString.length() > i; i++)
    {
        if (int(searchedWord[i]) > int(selectedString[i]))
        {
            return -1;
        }
        else if (int(searchedWord[i]) < int(selectedString[i]))
        {
            return 1;
        }
    }
    if (searchedWord.length() == selectedString.length())
    {
        return 0;
    }
    else if (searchedWord.length() > selectedString.length())
    {
        return -1;
    }
    else if (searchedWord.length() < selectedString.length())
    {
        return 1;
    }
    // return 1;
}

string Song::getStringSong()
{
    return (sIterms[0] + "\t|\t" + sIterms[1] + "\t|\t" + sIterms[2] + "\t|\t" + sIterms[3] + "\t|\t" + sIterms[4]);
}

string Song::getItem(const int &pos)
{
    return sIterms[pos];
}