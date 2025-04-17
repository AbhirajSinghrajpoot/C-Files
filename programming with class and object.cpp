#include<iostream>
#include<conio.h>
using namespace std;
class addition
{
    int a,b;
public:
     void getdata();
     void putdata();
};

void addition::getdata()
{
    cout<<"\n enter the two number : ";
    cin>>a>>b;
}
void addition::putdata()
{
    cout<<"\n addition = "<<a+b;
}
int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();
    getch();
    return 0;
}