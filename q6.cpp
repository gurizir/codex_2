#include<iostream>
using namespace std;
int main(){
    int t=0;
for(int j=2;j<=16;j++)
{


int c=0;
for(int i=2;i<j;i++)
{
    if(j%i==0)
    {c=1;}
    }
    if(c==0)
{cout<<j<<endl;
 t++;}
 if(t==5)
 {
    break;
 }}
 
    return 0;
}