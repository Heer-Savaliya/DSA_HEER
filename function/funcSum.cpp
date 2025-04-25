#include <iostream>
using namespace std;

int funcSum(int a,int b){
    int sum = a+b;
    return sum;
}

int main(){
    int a , b;
    cout << "Enter a and b = ";
    cin >> a>> b;
    int sum = funcSum(a,b);
    cout << sum;
    return 0;
}