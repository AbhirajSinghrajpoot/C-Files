#include<iostream>
using namespace std;
int main()
{
    int i,org,rev=0;
    cout<<"\n enter the value of i : ";
    cin>>i;
    org = i;
    for( ;i>0; i = i/10)
        rev = (rev*10)+i%10;
    {    
    if(org==rev)
       cout<<"\n is palindiome";
    else
        cout<<"\n is not palindiome";
    return 0; 
    }  
        
}