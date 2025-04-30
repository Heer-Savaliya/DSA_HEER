#include <iostream>
using namespace std;
int palindrome(int n){
    int original = n;
    int reverse =0;
    while(n>0){
        int rem=n%10;
        reverse = reverse*10 +rem;
        n/=10;
    }

    if(original==reverse){
        cout << "Palindrome ";
    }else{
        cout << "Not plaindrome ";
    }
    return reverse;
}
int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << palindrome(n) << "\n";
    return 0;
}