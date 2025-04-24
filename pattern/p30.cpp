#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i =0;i<n;i++){

        // start triangle
         for(int j=0;j<i+1;j++){
            cout << "*" << " ";
         }
         //  space
         for(int k =0;k<2*(n-i-1);k++){
             cout << " " << " ";
         }
         // start triangle
         for(int j=0;j<i+1;j++){
            cout << "*" << " ";
         }
         cout << "\n";
    }

    for(int i=n-2;i>=0;i--){

        // start triangle
         for(int j=0;j<i+1;j++){
            cout << "*" << " ";
         }
         //  space
         for(int k =0;k<2*(n-i-1);k++){
             cout << " " << " ";
         }
         // start triangle
         for(int j=0;j<i+1;j++){
            cout << "*" << " ";
         }
         cout << "\n";
    }
    return 0;
}