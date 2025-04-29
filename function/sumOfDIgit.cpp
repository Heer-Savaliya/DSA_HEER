#include <iostream>
using namespace std;
int sumOfDigit(int n){
    int digitsum = 0;
    while(n > 0){
        int lastdigit = n % 10;
        n = n /10;
        digitsum += lastdigit;
    }
    return digitsum;
}
int main(){
    int n ;
    cout << "ENter n = " << "\n";
    cin >> n;
    cout << "Sum of digit = " <<sumOfDigit(n) << "\n";
    return 0;
}