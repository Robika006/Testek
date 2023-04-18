#include <iostream>

using namespace std;

int main()
{
    char a[10][10];
    for(int i=0 ;i<6 ;i++){
        for(int j=0; j<6; j++){
            if(j<3){
                if(i>0 && i<5 && (j<2 || j>3)){
                    a[i][j]='*';
                }else{
                     a[i][j]='(';
                }
            }else{
                if(i>0 && i<5 && (j<2 || j>3)){
                    a[i][j]='*';
                }else{
                     a[i][j]=')';
                }
            }
            if((i==1 && j==1) ||(i==4 && j==1)){
                a[i][j]='(';
            }
            if((i==4 && j==4) ||(i==1 && j==4)){
                a[i][j]=')';
            }
            cout << a[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
