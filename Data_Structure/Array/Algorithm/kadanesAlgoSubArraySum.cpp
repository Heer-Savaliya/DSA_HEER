// With Brute force Maximum subarray sum
// (1 - Find all possible sub array)
// (2 - Find sum of that subarrays)
// (3 - Print the maximum subarray sum)


// 1 2 3 4 5 
// -------------Subarray-----------------
// 1 Sum = 1 12 Sum = 3 123 Sum = 6 1234 Sum = 10 12345 Sum = 15 
// 2 Sum = 2 23 Sum = 5 234 Sum = 9 2345 Sum = 14
// 3 Sum = 3 34 Sum = 7 345 Sum = 12
// 4 Sum = 4 45 Sum = 9
// 5 Sum = 5
// Maximum of subarray = 15

#include <iostream>
using namespace std;
int subArray(int arr[] ,int n){
    int curSum=0, maxSum=INT32_MIN;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        maxSum=max(curSum,maxSum);
        if(curSum <0){
            curSum =0;
        }
    }
    return maxSum;
}
void funcArray(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Maximum Subarray sum = " << subArray(arr,n);
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    funcArray(arr ,n);
    return 0;
}