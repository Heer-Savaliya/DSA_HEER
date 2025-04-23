#include <iostream>
using namespace std;
int main(){

    // A B C D
    // A B C D
    // A B C D
    // A B C D
     
    int n;
    cout << "Enter number : ";
    cin >> n;
    
    for(int i = 1;i<=n;i++){
        char ch = 'A';
        for (int j = 1 ; j<=n;j++){
            cout <<ch << " ";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}