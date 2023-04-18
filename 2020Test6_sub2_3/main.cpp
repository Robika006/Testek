#include <iostream>

using namespace std;

int main()
{
    int a[10][10],i,j;
    for(i=3; i>=0; i--){
        for(j=0; j<5; j++){
            if(i==3 && j==0){
               a[i][j]=1;
            }else if(i==3){
                a[i][j]=a[i][j-1]+1;
            }
            if(i==2 && j==0){
               a[i][j]=a[i+1][j+4]+1;
            }else if(i==2){
                a[i][j]=a[i][j-1]+1;
            }
            if(i==1 && j==0){
               a[i][j]=a[i+1][j+4]+1;
            }else if(i==1){
                a[i][j]=a[i][j-1]+1;
            }
            if(i==0 && j==0){
               a[i][j]=a[i+1][j+4]+1;
            }else if(i==0){
                a[i][j]=a[i][j-1]+1;
            }
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<5; j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
