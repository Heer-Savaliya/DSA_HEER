#include <iostream>
using namespace std;
int prime(int num){
    bool isPrime=true;
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            // isPrime =false;
            return false;
        }

    }return true;
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i =1; i<=n;i++){
        if(prime(i)){
            cout << i << " ";
        };

    }
    return 0;
}