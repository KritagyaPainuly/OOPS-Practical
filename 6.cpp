#include<iostream>
using namespace std;
void area(int a)
{
 cout<<"Enter side\n";
 cin>>a;   
 cout<<a*a<<endl;   
}
void area(int a,int b)
{
    cout<<"Enter sides\n";
    cin>>a>>b;
    cout<<a*b<<endl;
}
void area(float a)
{
    cout<<"Enter radius\n";
    cin>>a;
    cout<<3.14*a*a<<endl;
}
int main()
{
 int a,b;
 float c;
 cout<<"----SQUARE----\n";
 area(a);
 cout<<"----TRIANGLE----\n";
 area(c);
 cout<<"----RECTANGLE-----\n";
 area(a,b);
 }
