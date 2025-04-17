#include<iostream>
using namespace std;
int main()
{
    int i,rev = 0;
    cout<<"\n enter  the n value : ";
    cin >>i;
    while(i>0)
    {
        rev = (rev*10) + i%10;
        i = i/10;
    }
    cout<<"\n reverse value is : "<<rev;
    return 0;
}