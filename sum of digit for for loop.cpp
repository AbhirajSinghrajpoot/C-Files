#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "\n enter the n value : ";
    cin >> n;
    for( ;n>0; n = n/10)
        sum = sum + n%10;
    cout<<"\n sum of digit : "<< sum ;
    return 0;
}