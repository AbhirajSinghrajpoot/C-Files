#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    int a,b;
    public:
        demo(int m,int n)
        {
          a = m;
          b = n;
        }
        void putdata();
};
void demo::putdata()
{
    cout<<"sum = "<<a+b;
}
int main()
{
    int x,y;
    cout<<"enter x and y value = ";
    cin>>x>>y;
    demo aa(x,y);
    aa.putdata();
    getch();
    return 0;
}