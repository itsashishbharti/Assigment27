#include<iostream>
using namespace std;
class Time
{
    private:
    int h;
    int m;
    int s;
    public:
    Time (int a=0,int b=0,int c=0)
    {
        h=a;
        m=b;
        s=c;
    }
    bool operator ==(Time c)
    {
        if((h==c.h)&&(m==c.m)&&(s==c.s))
            return true;
        else
            return false;

    }
    friend istream & operator>>(istream &in,Time &c);
    friend ostream & operator<<(ostream &out,const Time &c);
};
istream & operator>>(istream &in,Time &c)
{
    cout<<"Hours  :";
    in>>c.h;
    cout<<" Minutes  :";
    in>>c.m;
    cout<<" Seconds  :";
    in>>c.s;
    return in;
}
ostream & operator<<(ostream &out, const Time &c)
{
    out<<"   Hours  :"<<c.h<<endl;
    out<<"Minutes  :"<<c.m<<endl;
    out<<"Seconds  :"<<c.s<<endl;
    return cout;
}
int main()
{
    Time t,t1;
    cout<<"Enter First Time..."<<endl;
    cout<<"--------------------"<<endl;
    cin>>t;
    cout<<endl;
    cout<<"-------First Time-------"<<endl;
    cout<<t;
    cout<<endl;
    cout<<"Enter Second Time..."<<endl;
    cout<<"--------------------"<<endl;
    cin>>t1;
    cout<<endl;
    cout<<"------Second Time-------"<<endl;
    cout<<t1;
    cout<<endl;
    if(t==t1)
    {
        cout<<"Time Matched"<<endl;
    }
    else
    {
        cout<<"Time Not Matched"<<endl;
    }
    return 0;
}