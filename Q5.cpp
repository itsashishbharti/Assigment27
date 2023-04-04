#include<iostream>
using namespace std;
class Number
{   
    private:
    int x,y,z;
    public:
    void setdata(int a=0,int b=0,int c=0)
    {
        x=a;
        y=b;
        z=c;
    }
    void operator-()
    {
        x*=(-1);
        y*=(-1);
        z*=(-1);

    }
    void display()
    {
        cout<<"Number  :"<<"X="<<x<<" Y="<<y<<" Z="<<z<<endl;
    }
};
int main()
{
    Number n,n1;
    n.setdata(2,-3,4);
    n.display();
    -n;
    n.display();
    n1.setdata(5,6,-7);
    n1.display();
    -n1;
    n1.display( );
    return 0;
}