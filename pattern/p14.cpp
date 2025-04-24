#include <iostream>
using namespace std;
int main(){

    // A 
    // B A
    // C B A
    // D C B A
    // E D C B A
    
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            char ch='A'+j;
            cout << ch << " ";
        }
        cout << "\n";
    }
    return 0;
}