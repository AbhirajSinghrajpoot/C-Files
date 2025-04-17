#include<iostream>
using namespace std;
class posineg
{
private:
    int a;
public:
    void getdata();
    void putdata();
};

void posineg::getdata()
{
    cout<<"\n enter the no. = ";
    cin>>a;
}
void posineg::putdata()
{
    if (a>0)
       cout<<"\n a is positive"<<a;
    else if(a<0)
       cout<<"\n a is negative"<<a;
    else
       cout<<"\n a is zero "<<a;   
}
int main()
{
    posineg aa;
    aa.getdata();
    aa.putdata();
    return 0;
}
