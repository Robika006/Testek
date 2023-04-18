#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ///ofstream out("bac.out");
    int p1,p2;
    cout <<"p1=";
    cin>>p1;
    cout <<"p2=";
    cin >>p2;
    for(int i=9999999; i<999999; i--){
        if((i%10)*(i%100)==p2 && (i/1000000)*((i/100000)%10)==p1){
                cout <<i<<" ";
        }
        cout <<"ab ";
    }
    return 0;
}
///12,8

