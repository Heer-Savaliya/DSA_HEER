#include <iostream>
#include <vector>   // from STL
using namespace std;
int main(){

    // vector<int> vec;   // declaration (current size is 0 )
    vector<int> vec = {1,2,3}; // size of 3
    cout << vec[0] << "\n";  // print (1)

    vector<int> vec1(3,0);   
    // size of vector =3
    // All index will store value 0
    cout << vec1[0] << " ";
    cout << vec1[1] << " ";
    cout << vec1[2] << "\n";   //0 0 0

    // for each loop
    for(int i : vec1){
        cout << i << " ";     // 0 0 0
    }

    return 0;
}