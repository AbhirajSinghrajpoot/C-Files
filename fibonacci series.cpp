#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    cout<<"\n enter the i value : ";
    cin>>i;
    j = 0;
    k = 1;
    l = 0;
    while(l<=i)
    {
        cout<<"\n"<<l;
        j=k;
        k=l;
        l=j+k;
    }
    return 0;
}