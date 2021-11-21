//Kritagya Painuly Sec L 20011216
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++)
    cout<<" ";   
    for(int k=0;k<=i*2;k++)
    cout<<"*";
    cout<<endl;}
}