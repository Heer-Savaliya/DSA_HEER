#include <iostream>
using namespace std;
int main(){
    int a ,b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Sum of " << a << " and " << b << " = " << (a+b) << "\n";
    cout << "Difference of " << a << " and " << b << " = " << (a-b) << "\n";
    cout << "Product of " << a << " and " << b << " = " << (a*b) << "\n";
    cout << "Division of " << a << " and " << b << " = " << (a/b) << "\n";
    cout << "Modulo of " << a << " and " << b << " = " << (a%b) << "\n";
    return 0 ;
}