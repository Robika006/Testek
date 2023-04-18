#include <iostream>

using namespace std;

int main()
{
    int x,y,c;
    cout <<"x=";
    cin>>x;
    cout <<"y=";
    cin>>y;
    do{
        c=x%10;
        x/=10;
        if(c != 0){
            if(y%10<c){
                y=y*10+c;
            }else{
                y=y*10-c;
            }
        }
    }while(x !=0);
    cout <<"y="<<y;
    return 0;
}
