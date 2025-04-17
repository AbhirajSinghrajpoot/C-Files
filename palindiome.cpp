#include<iostream>
using namespace std;
int main()
{
    int i,org,rev=0;
    cout<<"\n enter the value of i : ";
    cin>>i;
    org = i;
    while(i>0)
    {
        rev = (rev*10)+i%10;
        i = i/10;
    }
    if(org==rev)
       cout<<"\n is palindiome";
    else
        cout<<"\n is not palindiome";
    return 0;   
        
}