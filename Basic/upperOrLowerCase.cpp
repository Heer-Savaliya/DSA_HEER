#include <iostream>
using namespace std;
int main(){

    //A-Z=Uppercase    a-z=lowercase

    char ch;
    cout << "ENter a character : ";
    cin >> ch;
    
    if((ch>='A' && ch<='Z')){    // or ch==toupper(ch)
        cout << "Uppercase";
    }else if((ch>='a' && ch<='z')){
        cout << "Lowercase";
    }
    else{
        cout << "Other character";
    }
    return 0;
}