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
                cout<<":";
                cin>>a[i][j];
            }
        }
    }
    void operator-()
    {
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                
                a[i][j]*=(-1);
            }
        } 
    }
    void print()
    {
        cout<<"Matrix is :"<<endl;
         for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                cout<<":"<<a[i][j]<<":";
            }
            cout<<endl;
         }
         
    }
};
int main()
{
    matrix objm;
    objm.setdata();
    objm.print();
    -objm;
    objm.print();
    return 0;
}