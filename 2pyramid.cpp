#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"\n enter n value : ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<i+j;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}