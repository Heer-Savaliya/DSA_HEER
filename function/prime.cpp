#include <iostream>
using namespace std;
void primeOrNot(int num){
    bool isPrime = true;
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
          isPrime = false;
          break;  
        }
    }

    if(isPrime){
        cout << "Prime \n";
    }else{
        cout << "Not a prime number";
    }
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    primeOrNot(n);
    return 0;
}