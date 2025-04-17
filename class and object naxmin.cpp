#include<iostream>
using namespace std;
class oddeve
{
private:
    int a,b;
public:
    void getdata();
    void putdata();
};

void oddeve::getdata()
{
    cout<<"\n enter the no. = ";
    cin>>a>>b;
}
void oddeve::putdata()
{
    if (a>b)
       cout<<"\n a is greater"<<a;
    else
       cout<<"\n b is greater "<<b;   
}
int main()
{
    oddeve aa;
    aa.getdata();
    aa.putdata();
    return 0;
}