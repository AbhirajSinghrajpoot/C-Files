#include<iostream>
using namespace std;
int main(){
    int n,prod=1;
    cout << "\n enter the n value : ";
    cin >> n;
    for( ;n>0; n = n/10)
        prod = prod * n%10;
    cout<<"\n sum of digit : "<< prod ;
    return 0;
}