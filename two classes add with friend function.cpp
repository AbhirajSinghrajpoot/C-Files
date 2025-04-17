#include<iostream>
#include<conio.h>
using namespace std;
class B;

class A
{
    int a;
    public:
       void input()
       {
        cout<<"\n enter the a value = ";
        cin>>a;
       }
       friend void max(A,B);
};
class B
{
    int b;
    public:
       void getdata()
       {
        cout<<"\n enter the b value = ";
        cin>>b;
       }
       friend void max(A,B);
};
void max(A aa,B bb)
{
    if (aa.a > bb.b)
       cout<<"\n max a = "<<aa.a;
    else
       cout<<"\n max b = "<<bb.b;
}
int main()
{
    A aa; B bb;
    aa.input();
    bb.getdata();
    max(aa,bb);
    getch();
    return 0;
}