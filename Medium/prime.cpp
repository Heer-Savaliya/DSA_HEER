#include <iostream>
using namespace std;
int main (){

    // 2,3,5,7,11,13..... Prime number
    // 1,4,6,8,9,10,12,14.....
    int n;
    bool isPrime = true;
    cout << "Enter n : ";
    cin >>n;
    for(int i=2 ; i*i<=n ;i++){   //or i<n-1
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime==true){
        cout << n << " is Prime number";
    }else{
        cout<<n << " Not prime";
    }

    return 0;
}