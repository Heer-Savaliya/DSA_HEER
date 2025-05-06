// Delete an element at a specific position in array

// Original Array 
// 1 2 5
// Enter the position to delete data : 1
// New Array : 1 5 

#include <iostream>
#include <vector>
using namespace std;
void insertVal(vector<int> &vec){
    int pos;
    cout << "\nEnter the position to delete data : ";
    cin >> pos ;
    vec.erase(vec.begin()+ pos);
    
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