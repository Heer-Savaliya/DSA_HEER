#include <iostream>
using namespace std;
int main(){

    // Bitwise & (AND)
    // 0 0 =0
    // 1 0 =0
    // 0 1 =0
    // 1 1 =1

    // Bitwise | (OR)
    // 0 0 =0
    // 1 0 =1
    // 0 1 =1
    // 1 1 =1

    // Bitwise ^ (XOR)  same bit = 0 , diff bit =1
    // 0 0 =0
    // 1 1 =0
    // 1 0 =1
    // 0 1 =1

    // Bitwise << (LEFT SHIFT)
    // Bits are shifted to left side and right spaces are filled with 0

    // Bitwise >> (RIGHT SHIFT)
    // shifts the bits of a number to the right by a specified number of positions left space fill with 0 and je number baki ray gaya ae excluded.

    // 10>>1
    // 1010 =10
    // 0101 =5 pachal je baki ray gaya ae excluded

    int a = 6,b=10;
    cout << (a & b) << "\n";
    cout << (a | b) << "\n";
    cout << (a ^ b) << "\n";
    cout << (a << 1) << "\n";
    cout << (b << 2) << "\n"; //2plcaes shifted to left
    cout << (b >> 1) << "\n";
    cout << (b >> 2) << "\n";  
    cout << (10 << 2) << "\n";
    cout << (10 >> 1) << "\n";  
    return 0;
}