#include<iostream>
#include<conio.h>
using namespace std;
class A
{
     protected:
       int a;
     public:
       void input()
       {
        cout<<"\n enter number = ";
        cin>>a;
       }

};
class B
{   
    protected:
       int b;
    public:
       void getdata()
       {
        cout<<"\n enter number = ";
        cin>>b;
}
};
class C:public A,public B
{
    public:
      void addition()
      {
        cout<<"\n addition = "<<a+b;
      }
};
int main()
{
    C aa;
    aa.input();
    aa.getdata();
    aa.addition();
    getch();
    return 0;
}