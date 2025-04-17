#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    int a,b;
    public:
        void getdata();
        friend   int sum (demo);
};
void demo::getdata()
{
    cout<<"\n enter the two no. = ";
    cin>>a>>b;
}
int sum(demo aa)
{
    return (aa.a+aa.b);
}
int main()
{
    demo aa;
    aa.getdata();
    cout<<"\n addition = "<<sum(aa);
    getch();
    return 0;
}