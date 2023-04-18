#include <iostream>

using namespace std;

int main()
{
    int n,x=1,y,d=2;
    cin>>n;
    y=n;
    while(x<y){
        if(y%d==0){
            x=d;
            y=n/d;
        }
        d++;
    }
    if(x==y){
        cout <<"D"<<x;
    }else{
        cout <<"N";
    }
    return 0;
}
