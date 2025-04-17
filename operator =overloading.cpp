#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
      void getdata()
      {
        cout<<"\n enter a no. = ";
        cin>>a;
      }
      void putdata()
      {
        cout<<a;
      }
demo operator=(demo bb)
{
    a = bb.a;
}
};
int main()
{
    demo aa,bb;
    bb.getdata();
    aa=bb;
    aa.putdata();
    aa.putdata();
    return 0;
}