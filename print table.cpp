#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"\n enter the i value : ";
    cin>>i;
    j = 1;
    while(j<=10)
    {
        cout<<"\n"<<i*j;
        j++;
    }
    return 0;
}