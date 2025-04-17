#include<iostream>
using namespace std;
void add (int, int);
void add (int ,int, int);
int main()
{
    add (6,5);
    add (10,10,10);
    return 0; 
}
void add(int a, int b)
{
    cout<<"\n addition is : "<<a+b;
}
void add(int a, int b, int c)
{
    cout<<"\n addition is : "<<a+b+c;
}