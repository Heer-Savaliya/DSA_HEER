#include <iostream>
using namespace std;
int main(){

    // A
    // AB
    // ABC
    // ABCD

    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=0; i<n;i++){
        char ch ='A';
        for(int j =0;j<i+1;j++){

            cout << ch<< " "; 
            ch++;
        }
        cout << "\n";
    }

    return 0;
}