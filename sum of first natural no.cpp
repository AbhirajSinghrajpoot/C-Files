#include<iostream>
using namespace std;
int main()
{
    int n,i,j = 0;
    cout <<"\n enter the n value : ";
    cin>> n;
    i = 1;
    while(i<=n)
    {
        j = j + i;
        i = i +1;
    }
    cout<<"\n j : "<<j;
    return 0;

}