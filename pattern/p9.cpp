#include <iostream>
using namespace std;
int main(){

    // 1 2 3
    // 4 5 6
    // 7 8 9

    int n ;
    cout << "Enter n : ";
    cin >>n;
    int val = 1; 
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n; j++){
            cout << val << " ";
            val=val+1;
        }
        cout << "\n";
    }
    return 0;
}