#include <iostream>
using namespace std;
int main(){
    int a =10 , b=5;
    cout << "Sum = " << (a+b) <<"\n";
    cout << "Sub = " << (a-b) <<"\n";
    cout << "Mul = " << (a*b) <<"\n";
    cout << "Div = " << (a/b) <<"\n";
    cout << "Modulo = " << (a%b) <<"\n";
    cout << "Div = " << (5/2) <<"\n";  // int/int = int (thats why 2.5 is not coming and 2 is coming)
    cout << "Div = " << (5/(double)2) <<"\n";    // 2.5 int/double = double (thats why 2.5 comes)
    return 0 ;
}