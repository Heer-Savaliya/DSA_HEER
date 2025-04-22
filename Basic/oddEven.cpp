#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number to check it is odd or even : ";
    cin >> n;
    if (n%2==0)
    {
        cout << "Number is even";
    }
    else{
        cout << "Number is odd";
    }
    
    return 0 ;
}