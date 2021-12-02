#include<iostream>
using namespace std;
void display(int arr[],int m)
{
    for(int i=0;i<m;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void arrRot(int arr[],int n,int m)
{
    int arr1[m];
    for(int i=0;i<m;i++)
    {
      if(n+1>m)
      n=0; 
      arr1[i]=arr[n];
      n++;
    }
    display(arr1,m);
}
int main()
{
    int m;
    cout<<"How many numbers do you want in array\n";
    cin>>m;
    int arr[m],n;
    cout<<"Enter elements of array\n";
    for(int i=0;i<m;i++)
    cin>>arr[i];
    display(arr,m);
    cout<<"Enter postion to shift the array\n";
    cin>>n;
    arrRot(arr,n,m);
}
