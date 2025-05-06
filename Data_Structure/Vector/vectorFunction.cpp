#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> vec={'a','b','c','d','e'};
    cout << "Size = " << vec.size() << "\n";   // Size = 5 

    for(char value : vec){  
        cout << value << " ";    // a b c d e
    }
    return 0;
}