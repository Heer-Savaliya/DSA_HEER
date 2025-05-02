#include <iostream>
using namespace  std;

// Enter n : 5
// Enter array value : 78
// Enter array value : 6
// Enter array value : 4
// Enter array value : 90
// Enter array value : 4

// 4 90 4 6 78 

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++){
        cout << "Enter array value : ";
        cin >> nums[i];
    }
    for(int i=n-1;i>=0;i--){
        cout << nums[i] << " ";
    }
    return 0;
}