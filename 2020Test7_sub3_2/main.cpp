#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int a[10][10], m,n;
    cout <<"m=";
    cin>>m;
    cout <<"n=";
    cin>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            in>>a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        int pol=a[i][n-1];
        for(int j=0; j<m; j++){
            if(pol==a[j][0]){
                cout <<pol<<" ";
            }
        }
    }

    return 0;
}
