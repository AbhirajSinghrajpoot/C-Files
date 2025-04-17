#include<iostream>
using namespace std;
class demo
{
    int x;
    public:
      void getdata()
      {
        cout<<"\n enter x value is : ";
        cin>>x;
      }
      void putdata()
      {
        cout<<"\n  value : "<<x;
      }
bool operator==(demo bb)
{
    if (x==bb.x)
        return true;
    else
        return false;    
}
};
int main()
{
    demo aa,bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
    if(aa==bb)
       cout<<"\n value are equal ";
    else
       cout<<"\n value are unequal ";
       return 0;
}
