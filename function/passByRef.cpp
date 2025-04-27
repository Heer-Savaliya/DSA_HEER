#include <iostream>
using namespace std;
int sum(int a ,int b){
    a = a+5; // 10
    b=b+5;   //15
    return (a+b);   //25
}
int main(){
    int a =5,b=10;
    cout << sum(a,b) << "\n";
    cout << "a = "<<a;     // original value also change
    cout << "b = "<<b;
}