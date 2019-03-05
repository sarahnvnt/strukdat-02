/*
Nama 		: Sarah Navianti 
NPM 		: 140810180021
Kelas 		: A
Tanggal 	: 05 Maret 2019 
*/
#include <iostream>
#include <string.h>

using namespace std;

struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};

int main()
{
    Theater theater;
    theater.room=7;
    strcpy(theater.seat,"J9");
    strcpy(theater.movieTitle,"Adit & Jarwo");
    cout<< theater.room<< endl;
    cout<< theater.seat<< endl;
    cout<< theater.movieTitle<< endl;

    return 0;
}
