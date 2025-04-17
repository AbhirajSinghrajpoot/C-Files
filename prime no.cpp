#include<iostream>
using namespace std;
int main()
{
    int i,j,count=0;
    cout<<"\n enter the i value : ";
    cin>>i;
    j = 1;
    while(j<=i)
    {
        if(i%j==0)
           count++;
        j++;   
    }
    if(count==2)
       cout<<"\n is prime no.  ";
    else
       cout<<"\n is not prime no.  ";
    return 0;   
    
}
