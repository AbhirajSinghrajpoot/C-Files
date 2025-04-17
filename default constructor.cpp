#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    int a,b;
    public:
        demo()
        {
          a = 10;
          b = 20;
        }
        void putdata();
};
void demo::putdata()
{
    cout<<"sum = "<<a+b;
}
int main()
{
    demo aa;
    aa.putdata();
    getch();
    return 0;
}