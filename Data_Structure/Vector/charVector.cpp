#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> vec={'a','b','c','d','e'};
    for(char value : vec){    // for each loop
        cout << value << " ";    // a b c d e 
    }
    return 0;
}