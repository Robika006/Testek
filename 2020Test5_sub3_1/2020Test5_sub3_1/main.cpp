#include <iostream>

using namespace std;

void baza(int &n){
    int a=0;
    while(n>0){
        if(n%10>a){
            a=n%10;
        }
        n/=10;
    }
    n=a+1;
}
int main()
{
    int n;
    cin>>n;
    baza(n);
    cout <<n;
    return 0;
}
