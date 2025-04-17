#include<iostream>
using namespace std;
class A
{ 
    protected :
       int a;
    public:
      void input()
      {
        cout<<"\n enter a value = ";
        cin>>a;
      }
      void output()
      {
        cout<<"\n A = "<<a;
      }

};
class B
{  
    protected:
       int b;
    public:
      void input()
      {
        cout<<"\n enter b value = ";
        cin>>b;
      }
      void putdata()
      {
        cout<<"\n B = "<<b;
      }

};
class C:public A,public B
{  
    int c;
    public:
      void input()
      {
        cout<<"\n enter c value = ";
        cin>>c;
      }
      void display()
      {
        cout<<"\n C = "<<c;
      }
};
int main()
{
    C aa;
    aa.input();aa.A::input();aa.B::input();
    aa.display();
    aa.output();
    aa.putdata();
    return 0;
}