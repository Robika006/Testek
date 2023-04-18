#include <iostream>

using namespace std;

int main()
{
    int n,m=0,p=1,x=1,cn,c;
    cout <<"n=";
    cin>>n;
    while(x<10){
        cn=n;
        while(cn != 0){
            c=cn%10;
            cn=cn/10;
            if(c==x){
                m=c*p+m;
                p*=10;
            }

        }
        x+=2;
    }
    cout <<"m="<<m;
    return 0;
}
