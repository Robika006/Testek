#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int szam,oszeg1=0,oszeg2=0,kiir;
    while(in>>szam){
        if(szam>0){
            oszeg1+=szam;
        }
        oszeg2+=szam;
        if(oszeg2>oszeg1){

        }

    }
    cout <<oszeg1;
    return 0;
}
