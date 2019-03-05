#include <iostream>
#include <string.h>

using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char jk[30];
    char goldar[30];
};

int main()
{
    Orang orang;
    orang.umur=10;
    strcpy(orang.nama,"Fahmi");
    strcpy(orang.jk,"L");
    strcpy(orang.goldar,"O");

    cout<< orang.umur<< endl;
    cout<<orang.nama<< endl;
    cout<<orang.goldar<< endl;
    cout<<orang.jk<< endl;

    return 0;
}
