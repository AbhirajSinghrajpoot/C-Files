#include<iostream>
#include<conio.h>
using namespace std;
class A
{
     protected:
       int roll;
     public:
       void getroll()
       {
        cout<<"\n enter roll number = ";
        cin>>roll;
       }
       void putroll()
       {
        cout<<"\n Roll number = "<<roll;
       }

};
class B: public A
{   
    protected:
       int sub1,sub2;
    public:
       void getmarks()
       {
        cout<<"\n enter marks = ";
        cin>>sub1;
        cout<<"\n enter marks = ";
        cin>>sub2;
       }
       void putmarks()
       {
        cout<<"\n marks1 = "<<sub1;
        cout<<"\n marks1 = "<<sub2;
       }  
};
class C:public B
{   
    int sptm;
    public:
      void getsportmrk()
      {
        cout<<"\n enter sport marks = ";
        cin>>sptm;
      }
      void total()
      {
        putroll();
        putmarks();
        cout<<"\n sportmarks = "<<sptm;
        cout<<"\n total marks = "<<sub1+sub2+sptm;
      }
};
int main()
{
    C aa;
    aa.getroll();
    aa.getmarks();
    aa.getsportmrk();
    aa.total();
    getch();
    return 0;
}