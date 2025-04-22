#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter n : ";
    cin >> n;

    cout << "----------------------\n \n";
    cout << "Table of " << n << endl;
    for(i=1;i<=10;i++){
        cout << n << " * " << i << " = " << (n*i) << endl;
    }
    return 0;
}