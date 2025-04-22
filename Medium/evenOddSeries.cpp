#include <iostream>
using namespace std;
int main(){
    int n1,n2,i=1;
    cout << "Enter starting number : ";
    cin >> n1;
    cout << "Enter ending number : ";
    cin >> n2;

    //---------- for-----------

    cout << "Even series : ";
    for(i=n1;i<=n2;i++){
        if(i%2==0){
            cout << i << " ";
        }
    }

    cout << "\nOdd series : ";
    for(i=n1;i<=n2;i++){
        if(i%2!=0){
            cout << i << " ";
        }
    }
    
    return 0 ;
}