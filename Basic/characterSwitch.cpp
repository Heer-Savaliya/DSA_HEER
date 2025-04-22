#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    // int ascii_value = int(ch);
    // if (ascii_value>=48 && ascii_value <=57)
    // {
    //     cout << ch << " is digit ";
    // }
    // else if ((ascii_value>=65 && ascii_value<=90) || (ascii_value>=97 && ascii_value<=122))
    // {
    //     cout << ch << " is alphabet ";
    // }
    // else
    // {
    //     cout << "Special character";
    // }


    if (isdigit(ch))
    {
        cout << ch << " is digit ";
    }
    else if (isalpha(ch))
    {
        cout << ch << " is alphabet ";
    }
    else
    {
        cout << "Special character";
    }
    
    
    return 0 ;
}