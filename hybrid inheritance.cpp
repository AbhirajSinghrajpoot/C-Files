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
class C
{
    public:
      void putdata()
      {
        cout<<"\n Welcome class C";
      }
};
class D: public B,public C 
{
    public:
      void input()
      {
        cout<<"\n Welcome class D";
      }
};
int main()
{
    D dd;
    dd.input();
    dd.display();
    dd.message();
    dd.putdata();

    return 0;
}