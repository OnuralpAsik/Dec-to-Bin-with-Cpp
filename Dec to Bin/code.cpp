#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int y=1;
    int z=1;
    int x;
    cout<<"Sayıyı giriniz."<<endl;
    cin>>x;
    for(int t=1; t<2; t++){
        if (x==0){
            cout<<"0";
            exit(0);
        }
        else
            continue;
    }
    if(y==x){
        cout<<"1";
        exit(0);
    }
    else
        y*=2;
    for(;x>y;){
        y=2*y;
        z=2*z;
    }
    x-=z;
    cout<<"1";
    for(; x!=0;){
        z/=2;
        for(; x<z;){
            z=z/2;
            cout<<"0";
        }
        x=x-z;
        cout<<"1";
    }
    for(; z!=1;){
        z=z/2;
        cout<<"0";
    }
    return 0;
}