#include <iostream>
using namespace std;
int main(){
    // Type conversion-----------------

    char grade = 'A'; // 1 byte
    cout << "Char size = " <<sizeof(grade) << "\n";
    int value = grade ;   // type conversion char to int (small - big ) (implicit conversion)
    cout << "Value store in ASCII = " << value << "\n";   // 65
    cout << "After type conversion = " << sizeof(value) << "\n";   // 4 byte

    // Type casting (explicit) (big - small)
    double price = 100.99;
    int newPrice = int(price);
    cout << "New Price = " << newPrice;
    return 0 ;
}