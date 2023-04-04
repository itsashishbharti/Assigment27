#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    char str[100];
    public:
    void getdata()
    {
        cout<<"Enter Your String : ";
        cin.getline(str,100);
    }
    void operator!()
    {
        for(int i=0;i<=99;i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]+32;
            }
            else
            if(str[i]>=97 && str[i]<=122)
            {
                str[i]=str[i]-32;
            }
            else{
                continue;
            }
        }
    }
    void print()
    {
            cout<<str<<endl;
    }
};
int main()
{
    mystring m;
    m.getdata();
    m.print();
    !m;
    m.print();
    return 0;
}