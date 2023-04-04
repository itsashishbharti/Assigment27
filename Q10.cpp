#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
    public:
    void setdata()
    {
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                cout<<"--------------->";
                cin>>a[i][j];
            }
        }
    }
    matrix operator+(matrix m)
    {
        matrix t1;
          for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
               t1.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return t1;
    }
    void print()
    {
          for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                cout<<a[i][j]<<":";
            }
            cout<<endl;
        }
    }

};
int main()
{
    matrix m1,m2,m3;
    cout<<"First Matrix........."<<endl;
    m1.setdata();
    m1.print();
    cout<<" Secound Matrix........."<<endl;
    m2.setdata();
    m2.print();
    cout<<"Addition Matrix........."<<endl;
    m3=m1+m2;
    m3.print();
    return 0;
}