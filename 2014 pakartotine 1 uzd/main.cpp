#include <iostream>
#include <fstream>

using namespace std;

void nuskaitymas();
void skaiciavimai();
void spausdinimas();

int pirmas=0, antras=0, trecias=0;
int k,v,s,h,b;

int main()
{
    nuskaitymas();
    //skaiciavimai();
    spausdinimas();

    return 0;
}

void nuskaitymas()
{
    ifstream fd("U1.txt");
    fd >> k;
    for(int i=0; i<k; i++)
    {
        fd >> v;
        if(v == 1) pirmas++;
        if(v == 2) antras++;
        if(v == 3) trecias++;
        fd >> s >> h;
    }
    fd >> b;
    fd.close();
}
void spausdinimas()
{
    ofstream fr("U1rez.txt");
    fr << pirmas << " " << antras << " " << trecias << endl;
    fr << b << endl;
}
