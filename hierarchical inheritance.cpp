#include<iostream>
using namespace std;
class A
{
    public:
      void message()
      {
        cout<<"\n Welcome to class A";
      }
};
class B:public A
{
    public:
     void display()
     {
        cout<<"\n Welcome class B";
     }
};
class C:public A
{
    public:
      void putdata()
      {
        cout<<"\n Welcome class C";
      }
};
int main()
{
    B aa;C bb;
    aa.message();
    aa.display();
    bb.message();
    bb.putdata();
    return 0;
}