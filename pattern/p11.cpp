#include <iostream>
using namespace std;
int main(){

    // 1
    // 2 3
    // 4 5 6
    
    int n;
    cout << "Enter n :";
    cin >> n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}