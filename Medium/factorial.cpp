#include <iostream>
using namespace std;
int main(){
    int n , i= 1 , factorial = 1;
    cout << "Enter n : ";
    cin >> n;
    while (i<=n)
    {
        factorial *=i;
        i++;
    }
    cout << "Factorial = " << factorial;
    return 0 ;
}