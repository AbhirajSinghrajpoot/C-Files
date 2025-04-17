#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
      void getdata()
      {
        cout<<"\n enter the real number r is : ";
        cin>>r;
        cout<<"\n enter the imaginary number i is : ";
        cin>>i;
      }
      void putdata()
      {
        cout<<"\n Real value : "<<r<<"\n Imageinary value : "<<i;
      }
complex operator-(complex bb)
{
    complex cc;
    cc.r = r - bb.r;
    cc.i = i - bb.i;
    return cc;
}
};
int main ()
{
    complex aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa-bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}