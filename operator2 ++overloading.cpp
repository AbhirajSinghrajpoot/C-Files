#include<iostream>
using namespace std;
class demo
{
    int x;
    public:
      void getdata()
      {
        cout<<"\n enter a no. = ";
        cin>>x;
      }
      void putdata()
      {
        cout<<x;
      }
demo operator++(int)
{
    x = x+1;
}
};
int main()
{
    demo aa;
    aa.getdata();
    cout<<"\n original value = ";
    aa.putdata();
    aa++;
    cout<<"\n value of increment = ";
    aa.putdata();
    return 0;
}