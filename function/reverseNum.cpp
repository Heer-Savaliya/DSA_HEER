#include <iostream>
using namespace std;
int reverse(int num){
    while(num>0){
        int lastdigit = num % 10;
        num = num /10;
        cout << lastdigit;
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    reverse(n);
    return 0;
}