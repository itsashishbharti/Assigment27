#include<iostream>
using namespace std;
class fraction
{
    long numerator;
    long denominator;
    public:
     fraction(long n=0,long d=0)
     {
        numerator=n;
        denominator=d;
     }
    friend istream & operator >>(istream &in,fraction &f)
    {
        cout<<"Numerator=";
        in>>f.numerator;
        cout<<endl;
        cout<<"Denominator=";
        in>>f.denominator;
        cout<<endl;
        return in;
    }   
    friend ostream & operator <<(ostream &out,fraction &f)
    {
        out<<f.numerator<<"/"<<f.denominator<<endl;
        return out;
        
    }
    fraction operator++()
    {
       ++numerator;
       ++denominator;
       return(*this);
    }
    fraction operator++(int s)
    {
        fraction bj=*this;
        numerator++;
        denominator++;
        return bj;
    }
};
int main()
{
    fraction obj,obj1;
    cout<<"f1 : "<<obj;
    cout<<"f2 : "<<obj1;
    cout<<"Enter 1st Fraction value......."<<endl;
    cin>>obj;
    cout<<"f1++  : "<<endl;
    obj++;
    cout<<obj;
    cout<<"++f1  : "<<endl;
    ++obj;
    cout<<obj;
    cout<<"Enter 2nd Fraction value......."<<endl;
    cin>>obj1;



    cout<<"f2= ++f1"<<endl;
    obj1= ++obj;
    cout<<"f1  : "<<obj1<<endl;
    cout<<"f2  : "<<obj1<<endl;
    cout<<"f2= f1++"<<endl;
    obj1++;
    cout<<"f1  : "<<obj1<<endl;
    obj1=obj++;
    cout<<"f2  : "<<obj1<<endl;
    return 0;
}