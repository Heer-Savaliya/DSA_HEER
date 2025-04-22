#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;


    // using 3rd variable
    // c=b;
    // b=a;
    // a=c;
    // cout << "A = " <<a << endl;
    // cout << "B = " <<b;

    //without variable

    a= a+b; // a=10 , b= 5 so a=15
    b = a-b; // 15-5 =10
    a=a-b;  // 15 -10 =5

    cout << "A = " <<a << endl;
    cout << "B = " <<b;
    return 0 ;
}