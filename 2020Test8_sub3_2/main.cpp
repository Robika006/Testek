#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in("input.txt");
    int a[10][10],n,k;
    cout <<"n=";
    cin>>n;
    cout <<"k=";
    cin>>k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            in>>a[i][j];
        }
    }
    int prev,ment;
    for(int i=k-1; i>=1; i--){
            if(i==k){
                prev=a[k][i];
            }else{
                ment=a[k][i];
                a[k][i]=prev;
                prev=ment;
            }
    }
    a[k][k-1]=prev;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
