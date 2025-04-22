#include <iostream>
using namespace std;
int main(){

    // ****
    // ****
    // ****
    // ****

    // Solid square
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            cout << " * " << " ";
        }
        cout << "\n";
    }
    return 0;
}