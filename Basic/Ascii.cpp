#include <iostream>
using namespace std;
int main(){

    // ASCII value start from 32
    char ch;
    cout << "Enter character : ";
    cin >> ch;
    int ascii_value = int(ch);
    cout << "ASCII value of the " << ch << " is = " << ascii_value;
    return 0 ;
}