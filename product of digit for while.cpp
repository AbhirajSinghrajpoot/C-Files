#include<iostream>
using namespace std;
int main(){
    int n,prod=1;
    cout << "\n enter the n value : ";
    cin >> n;
    while(n>0)
    {
    prod = prod * (n%10);
    n = n/10;
    }
    cout<<"\n prod of digit : "<< prod ;
    return 0;
}