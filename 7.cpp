#include<iostream>
using namespace std;
void swap(int &n,int &m)
{
  int temp=n;
  n=m;
  m=temp;
}
int main(){
  int a=4,b=2;
  cout<<"BEFORE SWAP\n";
  cout<<a<<" "<<b<<endl;
  swap(a,b);
  cout<<"AFTER SWAP\n";
  cout<<a<<" "<<b<<endl;
}
