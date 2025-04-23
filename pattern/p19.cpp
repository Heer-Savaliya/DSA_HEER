#include <iostream>
using namespace std;
int main(){

    //    *
    //   * *
    //  * * *
    // * * * *
    
    int n;
    cout << "Enter n : ";
    cin >> n;

    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++){
            cout << " ";
        }
        for(int j=0;j<i+1;j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
}