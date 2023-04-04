#include<iostream>
using namespace std;
class Complex
{
        int a,b;
    public:
        Complex()
        {

        }
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        void get()
        {
            cout<<"Enter Your Number A= ";
            cin>>a;
            cout<<endl<<"Enter Your Number B= ";
            cin>>b;
            cout<<endl;
        }
      friend Complex operator+(Complex c1,Complex c);
        void dispaly()
        {
            cout<<"a+b i = "<<a<<" + "<<b<<"i"<<endl;
        }
};
  Complex operator +(Complex c1,Complex c )
        {
            Complex temp;
            temp.a=c1.a+c.a;
            temp.b=c1.b+c.b;
           return  temp;

        }
int main()
{
    Complex c,c1(2,3),c2;
    c.get();
    c2=c+c1;
    c2.dispaly();
    return 0;
}