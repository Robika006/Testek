#include <iostream>

using namespace std;
void suma(int &n){
    int nr=0,i=2;
    while(n >1){
        if(n%i==0){
            while(n%i==0){
               n=n/i;
            }
            nr+=i;
        }
        i++;
    }
    n=nr;
}
int main()
{
    int n;
    cin>>n;
    suma(n);
    cout<<endl<<n;
    return 0;
}
