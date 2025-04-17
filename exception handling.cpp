#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the two no. : ";
    cin>>a;
    cout<<"enter the two no. : ";
    cin>>b;
    try
    {
        {
            if(b!=0)
               {
                c =a/b;
                cout<<"\n division : "<<c;
               }
            else
               {
                throw(b);
               }
        }
    }
    catch(int b)
    {
        cout<<"\n divide by : "<<b;
    }
    return 0;
}
