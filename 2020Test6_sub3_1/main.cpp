#include <iostream>

using namespace std;
void prodprim(int n, int &p){
    for(int i=2; i<n/2+1; i++){
    if(n%i==0){
            p*=i;
        while(n%i==0){
            n/=i;
        }
    }
    }
}
int main()
{
    int n,p=1;
    cout <<"n=";
    cin>>n;
    prodprim(n,p);
    cout <<p;
    return 0;
}
