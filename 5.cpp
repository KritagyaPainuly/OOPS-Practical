#include<iostream>
using namespace std;
void fac(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
     fact=fact*i;
    }
    cout<<fact;
}
int main()
{
 int n;
 cout<<"Enter no ";
 cin>>n;
 fac(n);
 return 0;
}
