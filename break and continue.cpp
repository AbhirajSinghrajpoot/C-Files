//#include<iostream>
//#include<conio.h>
//using namespace std;
//int main(){
//  int i;
//i = 1;
//    while(i<=10)
//    {
//        cout <<i<<"\n";
//        i = i +1;
//        if(i==5)
//           break;
//    }
//    getch();
//   return 0;
//}


#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i;
    i = 0;
    while(i<=10)
    {
        i = i +1;
        if(i==5)
           continue;
        cout <<i<<"\n";
    }
    getch();
    return 0;
}


