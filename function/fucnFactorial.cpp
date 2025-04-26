#include <iostream>
using namespace std;
int funcFactorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    cout << "enter n :";
    cin >> n;
    cout << "Factorial = " << funcFactorial(n) << "\n";
}