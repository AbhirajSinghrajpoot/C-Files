#include<iostream>
using namespace std;
int main()
{
    int n,fac;
    cout<<"\n enter the n value : ";
    cin >>n;
    fac = 1;
    while(n>=1)
    {
        fac = fac * n;
        n = n - 1;
    }
    cout<<"\n fac value is : "<<fac;
    return 0;
}