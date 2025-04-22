#include <iostream>
using namespace std;
int main(){
    int p,t;
    float r;
    cout << "------Compound interest------";
    cout << "Enter principal amount : ";
    cin>> p;
    cout << "Enter rate of intersest : ";
    cin>> r;
    cout << "Enter time in years : ";
    cin>> t;
    cout << "Simple Interest = " << ((p*r*t)/100.0);
    return 0 ;
}