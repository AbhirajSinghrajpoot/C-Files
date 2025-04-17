#include<iostream>
using namespace std;
int main()
{
    int i,j,k,pro=1;
    cout<<"\n enter the i and j value : ";
    cin>>i>>j;
    k = 1;
    while(k<=j)
    {
        pro = pro*i;
        k++;
    }
    cout<<"\n final value : "<<pro;
    return 0;
}