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

int main(){
    int n,r,coefficient;
    cout<< "Enter n and r to calculate binomial coefficient : ";
    cin >> n>>r;
    cout << factorial(n) << endl;
    cout << factorial(r) << endl;
    cout << factorial(n-r) << endl;
    coefficient = factorial(n)/(factorial(r)*factorial(n-r));
    cout << "binomial coefficinet = " << coefficient << "\n";
    return 0;
}