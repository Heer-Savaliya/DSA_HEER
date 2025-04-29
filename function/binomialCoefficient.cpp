#include <iostream>
using namespace std;


//  nCr
// nCr = n!/r!(n-r)!

int factorial(int n){
    int f =1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int nCr(int n ,int r){
    int coefficient;
    coefficient = factorial(n)/(factorial(r)*factorial(n-r));
    return coefficient;
}

int main(){
    int n,r,coefficient;
    cout<< "Enter n and r to calculate binomial coefficient : ";
    cin >> n>>r;
    cout << "binomial coefficinet = " << nCr(n,r) << "\n";
    return 0;
}