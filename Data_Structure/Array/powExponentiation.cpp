// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

// Example 1:
// Input: x = 2.00000, n = 10
// Output: 1024.00000

// Example 2:
// Input: x = 2.10000, n = 3
// Output: 9.26100


#include<iostream>
using namespace std;
double power(double x, int n){
    double ans = 1;
    for(int i=0;i<n;i++){
       ans*=x; 
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