#include <iostream>
using namespace std;

// Enter n :5
// Enter array value = -3
// Enter array value = -2
// Enter array value = 4
// Enter array value = 56
// Enter array value = 2
// -3 -2 4 56 2 
// Smallest = -3
// Largest = 56

// Smallest value index = 0
// Largest value index = 3

//(index starts with 0 to n-1)

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
        // or 

        // if(nums[i] < smallest){
        //     smallest = nums[i];
        // }

    }
    cout << "\nSmallest = " << smallest;
    cout << "\nLargest = " << largest;
    for(int i =0;i<n;i++){
        if(smallest==nums[i]){
            cout <<"\nSmallest value index = " << i <<"\n";
        }
        if(largest==nums[i]){
            cout <<"\nLargest value index = " << i <<"\n";
        }
    }
}