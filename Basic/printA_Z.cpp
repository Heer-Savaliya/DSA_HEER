#include <iostream>
using namespace std;
int main(){
    char ch,ch1,ch2;
    cout << "Enter starting character : ";
    cin >> ch1;
    cout << "Enter ending character : ";
    cin >> ch2;
    for(ch = ch1 ; ch<=ch2 ;ch++){
        cout << ch << " ";
    }
    
    return 0 ; 
}