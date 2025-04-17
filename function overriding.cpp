#include<iostream>
using namespace std;
class A
{
    public:
      void display()
      {
        cout<<"/n Base class A";
      }

};
class B:public A
{
    public:
      void display()
      {
        cout<<"/n derived class  B";
      }

};
int main()
{
    B aa;
    aa.display(); aa.A::display();
    return 0;
}