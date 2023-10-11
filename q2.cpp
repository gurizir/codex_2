#include<iostream>
using namespace std;
int main(){
    const float pi=3.14;
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    float a=pi*r*r;
    cout<<"The area of the circle is "<<a;
    return 0;
}
