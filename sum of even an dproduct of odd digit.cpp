#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,prod=1,digit;
    cout<<"\n enter the n value : ";
    cin>> n;
    while(n>0)
    {
        digit = n%10;
        if(digit%2==0)
           sum = sum +digit;
        else 
           prod = prod * digit;  
        n = n/10;
    }
    cout<<"\n sum of even : "<<sum;
    cout<<"\n product of odd : "<<prod;
    return 0;
}
