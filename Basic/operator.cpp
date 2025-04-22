#include <iostream>
using namespace std;
int main(){

    int a =10 , b=5;

    // arithmethic

    cout << "Arithmethic \n";
    cout << "Sum = " << (a+b) <<"\n";
    cout << "Sub = " << (a-b) <<"\n";
    cout << "Mul = " << (a*b) <<"\n";
    cout << "Div = " << (a/b) <<"\n";
    cout << "Modulo = " << (a%b) <<"\n";
    cout << "Div = " << (5/2) <<"\n";  // int/int = int (thats why 2.5 is not coming and 2 is coming)
    cout << "Div = " << (5/(double)2) <<"\n";    // 2.5 int/double = double (thats why 2.5 comes)

    // realtional

    cout << "Relational \n";
    cout << (3<5) <<"\n";    // true -1
    cout << (3>5) <<"\n";    // false -0
    cout << (3<=3) <<"\n";    // true -1
    cout << (3==3) <<"\n";    // true -1
    cout << (3!=3) <<"\n";    // false -0

    // logical

    cout << "Logical \n";
    cout << (3==3) <<"\n";  // true
    cout << !(3==3) <<"\n";  // false (Logical not reverse the answer)
    cout << ( (3<5) || (3<1)) <<"\n";  // T F = T
    cout << ( (3!=3) || (3<1)) <<"\n";  // F F = F
    cout << ( (3<5) && (3<1)) <<"\n";  // T F = F (Both should be true in logical AND then only it will execute)
    
    // UNARY

    cout << "Unary \n";
    int c =10;
    int d = c++;  // pela kam thay means c ni 10 value d ne ape atle d= 10 then c inc by 1
    cout << "D = " << d <<endl; // 10
    cout << "C = " << c <<endl; // 11

    int f =10;
    int e = ++f;  // pela inc thay pachi e ne value ape atle e pase increased value jase
    cout << "e = " << e <<endl; // 11
    cout << "f = " << f <<endl; // 11
    return 0 ;
}