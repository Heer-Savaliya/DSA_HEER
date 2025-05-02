#include <iostream>
using namespace std;

// Enter n :5
// Enter array value = 23
// Enter array value = 2
// Enter array value = 5
// Enter array value = 86
// Enter array value = 33

// 2 86 

int main(){
    int n;
    cout << "Enter n :";
    cin >>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cout << "Enter array value = ";
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            cout << nums[i] << " ";
        }
    }
}