#include <iostream>
using namespace std;
int main(){

    //    *
    //   * *
    //  * * *
    // * * * *
    //  * * *
    //   * *
    //    *

    int n;
    cout << "Enter n :";
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int k=0;k<n-i;k++){
            cout << " ";
        }
        for (int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }

    for(int i=1;i<=n-1;i++){
        for(int k=0;k<i;k++){
            cout << " ";
        }
        for (int j=1;j<=n-i;j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}