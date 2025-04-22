#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;
    
    if (n>0)
    {
        cout << n << " is postive number";
    }
    else if (n<0)
    {
        cout << n << " is negative number";
    }
    else
    {
        cout << n << " is zero";
    }
    
    return 0;
}