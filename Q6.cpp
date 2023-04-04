#include<iostream>
#include<cstring>
using namespace std;
class CString
{
    int x;
    char name[50],name1[100];
    public:

    void setdata()
    {
        cout<<"Enter Name= ";
        cin.getline(name,20);
        cout<<endl;
    }
    void print()
    {
        cout<<"Sting   :  "<<name<<endl;
    }
    int operator ==(CString s)
        {
               if(!strcmp(name,s.name))
               {
                return 1;
               }
               else
               {
                return 0;
               }
        }
    
  friend  CString operator+( CString &n1, const CString &n2);
};
  CString operator+( CString &n1, const CString &n2)
    {
       strcat(n1.name,n2.name);
       return n1;
    }
int main()
{
    CString obj,obj1,obj2;
    obj.setdata();
    obj1.setdata();
     if(obj==obj1)
    {
        cout<<"Matched"<<endl;
    }
    else
    {
        cout<<"Not Matched"<<endl;
    }
    obj2= obj+obj1;
    obj2.print();
   
    return 0;
}