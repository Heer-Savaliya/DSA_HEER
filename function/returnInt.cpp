#include <iostream>
using namespace std;

//! syntax;
// returnType funcName(){

//     // block of code
// }

//? Defination

int printHello(){
    cout << "Hello\n";
    return 4;
}

int main(){
    int val = printHello();   //?calling
    cout << "returned value = " << val << "\n";
    printHello();
    return 0;
}