#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<20;i++){
        if(i==10){continue;}
        else if(i%2==0){cout<<i<<endl;}
    }
    return 0;
}