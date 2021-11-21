//Kritagya Painuly Sec L 20011216
#include<iostream>
using namespace std;
int main()
{
    int a,n,m;
    while(1)
    {
        cout<<"1 ADD 2 MINUS 3 MULTIPLY 4 DIVIDE 5 EXIT\n";
        cin>>a;
        switch(a)
        {
            case 1:{ 
                cout<<"Enter numbers\n";
                cin>>n>>m;
                cout<<n+m<<endl;      
                break;
            }
            case 2:{ 
                cout<<"Enter numbers\n";
                cin>>n>>m;
                cout<<n-m<<endl;      
                break;
            }
            case 3:{ 
                cout<<"Enter numbers\n";
                cin>>n>>m;
                cout<<n*m<<endl;      
                break;
            }
            case 4:{ 
                cout<<"Enter numbers\n";
                cin>>n>>m;
                cout<<n/m<<endl;      
                break;
            }
            case 5:{ 
                cout<<"EXITING!!!!";
                return 0;
                }
        }
    }
   
}