#include<iostream>
using namespace std;
void year(int a);
int main()
{
    int a;
    cout<<"ENTER YEAR\n";
    cin>>a;
    year(a);
}
void year(int a)
{
    if((a%400==0)||(a%100!=0 && a%4==0))
    cout<<"Year is Leap Year";
    else
    cout<<"Year is not Leap Year";
}
