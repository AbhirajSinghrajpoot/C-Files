#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the two no. : ";
    cin>>x;
    try
    {
        if (x==0)
           throw(x);
        if (x==100)
           throw('e');
        if (x==1000)
           throw(5.5);
    }
    catch(int x)
    {
       cout<<"value of x is zero : "<<x;
    }
        catch(char x)
    {
       cout<<"value of x is charatar: "<<x;
    }
            catch(float x)
    {
       cout<<"value of x is float : "<<x;
    }

 
}