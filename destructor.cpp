#include<iostream>
using namespace std;
int count = 0;
class demo
{   
   public:
    demo()
    {
        count++;
        cout<<"\n No of object created = "<<count;
    }
    ~demo()
    {
        count--;
        cout<<"\n No of object deleted = "<<count;
    }
};
int main()
{
    demo aa,bb,cc;
    {
        demo dd;
    }
    return 0;
}