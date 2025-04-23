#include <iostream>
using namespace std;
int main(){

    // A
    // B C
    // D E F
    
    int n;
    cout << "Enter n : ";
    cin >> n;
    char ch = 'A';
    for (int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << ch << " ";
            ch ++;
        }
        cout << "\n";
    }

    return 0;
}