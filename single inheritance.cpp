#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    protected:
       int x;
     public:
       void input()
       {
        cout<<"\n enter number = ";
        cin>>x;
       }
};
class B:public A
{
    int y;
    public:
       void getdata()
       {
        cout<<"\n enter number = ";
        cin>>y;
       }
       void putdata()
       {
        cout<<"\n Addition = "<<x+y;
       }
};
int main()
{
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    getch();
    return 0;
}