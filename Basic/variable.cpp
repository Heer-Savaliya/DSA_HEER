#include <iostream>
using namespace std;
int main(){
    int age = 25;
    string name = "Heer";
    char grade = 'A';
    float PI = 3.14f; // float - 4 byte
    double price = 100.99; // double - 8 byte
    bool isSafe = false ; 
    cout << "My name is " << name << ". My age is " << age << " . My Grade is " << grade << "\n";
    cout << "Is it safe = " << isSafe << "\n";    // false - 0 true - 1
    cout << "Price = " << price << "\n"; 
    cout << "PI = " << PI << "\n"; 
    cout << "Size of integer " << sizeof(age) << "\n";  //int - 4byte
    cout << "Size of char " << sizeof(grade); //char - 1 byte
    // My name is Heer. My age is 25
    return 0 ;
}