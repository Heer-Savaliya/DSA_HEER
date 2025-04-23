#include <iostream>
using namespace std;
int main(){
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