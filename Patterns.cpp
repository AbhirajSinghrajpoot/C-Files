#include <iostream>
using namespace std;

int main() {
    int n = 5;

    cout << "\n1. Square Pattern\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n2. Right Triangle\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n3. Inverted Triangle\n";
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n4. Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n5. Number Triangle\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "\n6. Floyd's Triangle\n";
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num++ << " ";
        }
        cout << endl;
    }

    cout << "\n7. Reverse Number Triangle\n";
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "\n8. 0-1 Triangle\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << (i+j)%2 << " ";
        }
        cout << endl;
    }

    cout << "\n9. Hollow Square\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    cout << "\n10. Half Diamond\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }

    return 0;
}
