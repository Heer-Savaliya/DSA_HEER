#include <iostream>
using namespace std;
int main(){

    //    *
    //   * *
    //  *   *
    // * * * * 
    
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=0;i<n;i++){
        // space
        for(int j=1;j<n-i;j++){
            cout << " ";
        }

        cout << "*";
        for(int k=0;k<2*i-1;k++){
            if(i==n-1){
                if(k%2==0){
                    cout << " ";
                }else{
                    cout << "*";
                }
            }else{
                cout << " " ;

            }
        }
        if(i!=0){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}