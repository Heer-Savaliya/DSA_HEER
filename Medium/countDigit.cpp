#include <iostream>
using namespace std;
int countDigit(int n){
    int count =0;
    while(n>0){
        int rem = n%10;
        count ++;
        n/=10;
    }
    return count;
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "DIgit in number = " << countDigit(n) << "\n";
    return 0;
}