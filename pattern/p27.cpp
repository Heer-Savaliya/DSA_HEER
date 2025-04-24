#include <iostream>
using namespace std;
int main(){

    // E D C B A 
    // D C B A
    // C B A
    // B A
    // A
    
    int n;
    cout << "Enter n : ";
    cin >> n;
    
    for(int i=n;i>=1;i--){
        for (int j=i;j>=1;j--){
            cout << char('A' + j -1) << " ";
        }
        cout << "\n";
    }
    return 0;
}