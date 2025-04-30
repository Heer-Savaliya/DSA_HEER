#include <iostream>
#include <cmath>
using namespace std;
int digit(int n) {
    int count = 0;
    while(n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
int armstrong(int n){
    int original = n;
    int ans=0;
    int p = digit(n);
    while(n>0){
        int rem=n%10;
        ans += pow(rem,p);
        n/=10;
        // p*=10;
    }
    return ans==original;

}
int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    if (armstrong(n)) {
        cout << n << " is an Armstrong number\n";
    } else {
        cout << n << " is NOT an Armstrong number\n";
    }
    return 0;
}