#include <iostream>

using namespace std;
void putere(int n, int &p){
    int nr=0;
    while(n%p==0){
        n=n/p;
        nr++;
    }
    p=nr;
}
int main()
{
    int n,p;
    cin>>n;
    cin>>p;
    putere(n,p);
    cout <<p;
    return 0;
}
