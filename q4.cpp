#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Please enter your age: ";
    cin>>age;
    if(age<13 && age>0){
        cout<<"You are a child.";}
    else if(age>=13 && age<=18){
        cout<<"You are a teenager.";
    }
    else if(age>18 && age<75){
        cout<<"You are an adult.";
    }
    else if(age>75){
        cout<<"You are a senior citizen.";
    }
    else{cout<<"Please enter a valid age.";}
    return 0;
}