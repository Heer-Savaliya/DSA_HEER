// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

// Example 1:
// Input: x = 2.00000, n = 10
// Output: 1024.00000

// Example 2:
// Input: x = 2.10000, n = 3
// Output: 9.26100

// Example 3:
// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25

#include<iostream>
using namespace std;
double power(double x, int n){
    long binForm = n;
    double ans = 1;
    if(n<0){     //for negative power
        x = 1/x;
        binForm = -binForm;
    }
    while(binForm > 0){
        if(binForm % 2 == 1){
            ans*=x;
        }
        x*=x; //x^2
        binForm /=2;
    }
    return ans;
}
int main(){
    double x;
    int n;
    cout << "Enter base : ";
    cin >> x;
    cout << "Enter power : ";
    cin >> n;
    cout << "Power = " << power(x,n) ;
    return 0;
}