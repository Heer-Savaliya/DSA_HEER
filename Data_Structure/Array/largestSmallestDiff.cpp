#include <iostream>
using namespace std;

// Enter n :5
// Enter array value = 67
// Enter array value = 5
// Enter array value = 56 
// Enter array value = 8
// Enter array value = 45 
// 67 5 56 8 45 

// Smallest = 5
// Largest = 67
// Difference = 62

int main(){
    int n;
    cout << "Enter n :";
    cin >>n;
    int nums[n] ,smallest=INT32_MAX ,largest =INT32_MIN;
    for(int i=0;i<n;i++){
        cout << "Enter array value = ";
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
        smallest =min(nums[i],smallest);
        largest = max(nums[i],largest);
    }
    cout << "\nSmallest = " << smallest;
    cout << "\nLargest = " << largest;
    cout << "\nDifference = "<< (largest-smallest) << "\n";
}