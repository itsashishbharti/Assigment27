#include<iostream>
using namespace std;
class Complex
{

    public:
        int a,b;
        Complex()
        {

        }
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        Complex operator +(Complex c3 )
        {
            Complex temp;
            temp.a=a+c3.a;
            temp.b=b+c3.b;
           return  temp;

        }
        Complex operator -(Complex c3)
        {
            Complex temp;
            temp.a=a-c3.a;
            temp.b=b-c3.b;
            return temp;
        }
         Complex operator *(Complex c3)
        {
            Complex temp;
            temp.a=a*c3.a;
            temp.b=b*c3.b;
            return temp;
        }
         bool operator ==(Complex c3)
        {
           if(a==c3.a && b==c3.b)
           {
                return true;
           }
           else
           {
            return false;
           }
        }
        void dispaly()
        {
            cout<<"a+b i = "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    Complex c(2,3),c1(2,3),c2;
    c2=c+c1;
    c2.dispaly();
    c2=c-c1;
    c2.dispaly();
    c2=c*c1;
    c2.dispaly();
    cout<<"Compare C==C1 = "<<(c==c1)<<endl;
    return 0;
}