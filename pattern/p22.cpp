#include <iostream>
using namespace std;
int main(){

    //    1
    //   121
    //  12321
    // 1234321
    
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=0;k<n-i;k++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << j ;
        }

        if(i>1){
            for (int l=i-1;l>=1;l--){
                cout << l;
            }
        }
        
        cout << "\n";
    }
    return 0;
}