#include <iostream>
using namespace std;
int main(){
    int a,b,c,temp;
    cout << "Enter value of a b c : ";
    cin >> a >> b >> c ;

    // Using variable

    // temp = c;
    // c=b;
    // b=a;
    // a=temp;

    // Without variable

    a = a+b+c;
    b = a - (b+c);
    c = a - (b+c);
    a = a-b-c;
    cout << "--------After swapping---------\n";
    cout << "a = " <<a << " ";
    cout << "b = " <<b << " ";
    cout << "c = " <<c;
    return 0;
}