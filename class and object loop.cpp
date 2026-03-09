#include<iostream>
using namespace std;
class tentoone
{
private:
    int n;
public:
    void getdata();
    void putdata();
};

void tentoone::getdata()
{
    cout<<"\n enter the no. = ";
    cin>>n;
}
void tentoone::putdata()
{
    int i;
    for(i=n;i>=1;i--)
       cout<<"\n"<<i;
}

int main()
{
    tentoone aa;
    aa.getdata();
    aa.putdata();
    return 0;
}
