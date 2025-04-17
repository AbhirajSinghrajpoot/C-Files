#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
    cout <<"enter the a value : ";
    cin >> a;
    if(a%2==0)
        goto even;
    else
        goto odd;
    
    even:
        cout<<"\n the number is even";
        getch();
        return 0;
    odd:
        cout<<"\n the number is odd";
        getch();
        return 0;
}