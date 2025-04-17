#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,total;
    float per;
    cout << "\nEnter marks of 5 subject:";
    cin >> a >> b >> c >> d >> e;
    total = a+b+c+d+e;
    per = (total*100)/500;
    cout << "\n total marks : "<< total;
    cout << "\n percentage : %"<< per;
    return 0;
}
