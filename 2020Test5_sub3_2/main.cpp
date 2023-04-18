#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int szamlalo=0;
    bool elott=false;
    getline(cin,a);
    for(int i=0; i<a.size(); i++){
        if(a[i]>'0'&& a[i]<'9'+1 ){
            if(elott==false){
                szamlalo++;
            }else{
                szamlalo--;
            }
        }
        if(a[i]==','){
            elott=true;
        }else{
            elott =false;
        }


    }
    cout <<szamlalo;
    return 0;
}
