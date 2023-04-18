#include <iostream>

using namespace std;

int main()
{
    int nr=0,i=1,j,n,x,y,r;
    cout <<"n=";
    cin>>n;
    while(i<=n){
        x=0;
        y=1;
        j=1;
        while(j<i){
            r=2*x-y;
            x=y;
            y=r;
            j++;
        }
        i++;
        if(y>0){
            nr++;
        }
    }
    cout <<"nr="<<nr;
    return 0;
}
