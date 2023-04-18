#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int szam,sor1,sor2;
    while(in>>szam){
        if(szam<0){
            sor1+=szam;
        }
        sor2+=szam;
        if(sor2<sor1){
            sor1=0;
        }
        sor2=0;
    }
    cout <<sor1;
    return 0;
}
