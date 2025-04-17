#include <iostream>
using namespace std;
int main()
{
    int n,i,j,b;
    cout<<"\n enter the v value : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       for(b=1;b<=n-i;b++)
          cout<<" ";
       for(j=1;j<=i;j++) 
          cout<<"*";  
        cout<<"\n";
    }
    return 0; 
}