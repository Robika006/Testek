#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str,str2;
    int nr=0;
    int magan=0, masal=0;
    bool kiir=false;
    getline(cin,str);
    for(int i=0; i<str.size()+1; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u'){
            magan++;
            ///str2[nr]=str[i];
            str2.push_back(str[i]);
            nr++;
        }else if(str[i] != ' '){
            masal++;
            ///str2[nr]=str[i];
            str2.push_back(str[i]);
            nr++;
        }
        if(str[i]==' '){
            if(masal>magan){
                cout <<str2<<endl;
                kiir=true;
            }
        masal=0;
        magan=0;
        nr=0;
        str2={};
        }
    }
    if(kiir==false){
        cout<<"nu exista";
    }

    return 0;
}
///ei au plantat tamarix ea a adus iasomie
