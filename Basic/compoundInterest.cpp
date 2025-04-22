#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int p,t;
    float r,amount;
    cout << "------Compound interest------\n";
    cout << "Enter principal amount : ";
    cin>> p;
    cout << "Enter rate of intersest : ";
    cin>> r;
    cout << "Enter time in years : ";
    cin>> t;
    amount = p*(pow(1+(r/100),t));
    cout << "Amount = " << amount << endl;
    
    // CI = Amount - P
    cout << "Compound Interest : "<<(amount-p);
    return 0 ;
}