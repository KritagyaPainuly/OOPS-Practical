//Kritagya Painuly Sec L 20011216
#include<iostream>
using namespace std;
class avg{
    float a;
    float b;
    public:
    avg(float n,float m)
    {
        a=n;
        b=m;
    }
    void average(){
    cout<<(a+b)/2<<endl;
    }
};
int main()
{
    avg a(2,3);
    a.average();
}
