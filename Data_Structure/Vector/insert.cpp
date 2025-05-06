// Insert an element at a specific position in array

// Original Array 
// 1 2 5

// Enter the position to enter data : 2
// Enter value : 10

// New Array : 1 2 10 5

#include <iostream>
#include <vector>
using namespace std;
void insertVal(vector<int> &vec){
    int val ,pos;
    cout << "\nEnter the position to enter data : ";
    cin >> pos ;
    cout << "Enter value : ";
    cin >> val;
    vec.insert(vec.begin() + pos,val);
}
int main(){
    vector<int> vec ={1,2,5};
    
    cout << "Original Array \n";
    for(int val : vec){
        cout << val << " ";
    }
    insertVal(vec);
    
    cout << "New Array : ";
    for(int val : vec){
        cout << val << " ";
    }
    return 0;
}