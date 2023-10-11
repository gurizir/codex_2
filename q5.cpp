#include<iostream>
#include<string>
using namespace std;
int main(){
    string pass;
    string correctpass="hello";
    cout<<"Enter password: ";
    cin>>pass;
    while(true){
        if(pass==correctpass){
            cout<<"Correct!";
            break;}
        else{cout<<"Incorrect. Try again."<<endl;
        cout<<"Enter password: ";
        cin>>pass;}
    }
    return 0;
}