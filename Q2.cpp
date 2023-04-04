#include<iostream>
using namespace std;
class  overload
{
    int n;
    public:
    overload()
    {

    }
    void set(int x)
    {
        n=x;
    }
    void display()
    {
        cout<<"Value Of N= "<<n<<endl;
    }
    void operator ++(void)
    {
        n=++n;
    }
    void operator --(void)
    {
        n=--n;
    }
     void operator ++(int)
    {
        n=n++;
    }
    void operator --(int)
    {
        n=n--;
    }
};
int main()
{
    overload o;
    o.set(5);
    ++o;
    o.display();
    o++;
    o.display();
    --o;
    o.display();
    o--;
    o.display();
    return 0;
}