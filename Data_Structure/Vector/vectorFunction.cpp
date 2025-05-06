#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> vec={'a','b','c','d','e'};
    cout << "Original Size = " << vec.size() << "\n";   // Original Size = 5
    vec.push_back('f');
    vec.pop_back();  // f deleted
    cout << "Front value = " << vec.front() << "\n";   // Front value = a
    cout << "Last value = " << vec.back() << "\n";   // Last value = e
    cout << "Value at index = " << vec.at(1) << "\n";   // Value = b (If Value not exits then it will give an error)

    for(char value : vec){  
        cout << value << " ";    // a b c d e f
    }
    cout << "Size = " << vec.size() << "\n"; //Size =6 (New size)
    return 0;
}