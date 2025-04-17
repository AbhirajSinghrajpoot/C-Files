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
    demo bb(aa);
    demo cc = bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    getch();
    return 0;
}