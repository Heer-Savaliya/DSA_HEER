#include <iostream>
using namespace std;
int main(){

    // 111
    //  22
    //   3
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << i+1 << "";
        }
        cout << "\n";
    }
    return 0;
}