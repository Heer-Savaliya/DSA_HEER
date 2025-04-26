#include <iostream>
using namespace std;
int funcSum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout << "enter n :";
    cin >> n;
    cout << "Sum = " << funcSum(n) << "\n";
}