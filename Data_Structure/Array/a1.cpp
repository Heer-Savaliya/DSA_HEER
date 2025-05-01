#include <iostream>
using namespace std;
int main(){
    int marks[5] = {78 ,23,56,65,34};
    
    cout << marks[0] << "\n";
    cout << marks[1] << "\n";
    cout << marks[2] << "\n";
    cout << marks[3] << "\n";
    cout << marks[4] << "\n";
    cout << marks[5] << "\n";  // if there is not value at that position than it will give garbage value
    return 0;
}