#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "ENter n : ";
    cin >>n;

    //     *
    //    * *
    //   *   *
    //  *     *
    //   *   *
    //    * *
    //     *

    for (int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            cout << " ";
        }
        cout << "*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }

    // reverse
    for (int i=0;i<n-1;i++){
        for(int k=0;k<i+1;k++){
            cout << " ";
        }
        cout << "*";
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}