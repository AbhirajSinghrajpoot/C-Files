#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    int a;
    public:
        demo()
        {
           a = 10; 
        }
        demo(int x)
        {
          a = x;
        }
        demo(demo & z)
        {
            a = z.a;
        }
        void putdata();
};
void demo::putdata()
{
    cout<<"\n A = "<<a;
}
int main()
{
    demo aa;
    demo bb(20);
    demo cc(aa);
    aa.putdata();
    bb.putdata();
    cc.putdata();
    getch();
    return 0;
}