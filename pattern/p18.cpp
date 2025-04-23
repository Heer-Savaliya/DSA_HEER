#include <iostream>
using namespace std;
int main(){

    //    1
    //   1 2
    //  1 2 3
    // 1 2 3 4
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}