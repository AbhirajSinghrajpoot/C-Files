#include<iostream>
using namespace std;
class xyz
{
private:
    int a,b;
public:
    void getdata();
    void putdata();
};

void xyz::getdata()
{
    cout<<"\n enter the no. = ";
    cin>>a>>b;
}
void xyz::putdata()
{
    cout<<"\n a = "<<a<<"\t b = "<<b;
}
int main()
{
    xyz aa[5];
    int i;
    for(i=0;i<5;i++)
        aa[i].getdata();
    for(i=0;i<5;i++)
        aa[i].putdata();    
    return 0;
}
