#include <iostream>
#include <math.h>
using namespace std;

// Enter n : 5
// Enter value : 8
// Enter value : 6
// Enter value : 3
// Enter value : 5
// Enter value : 2
// original array 
// 8 6 3 5 2 Small2 large8
// Swap array
// 2 6 3 5 8

void swapMinMax(int arr[] ,int n){
    int smallest = INT32_MAX ,largest = INT32_MIN;
    int minIndex = 0, maxIndex = 0;

    for(int i=0;i<n;i++){
        if (arr[i] < smallest) {
            smallest = arr[i];
            minIndex = i;
        }
        if (arr[i] > largest) {
            largest = arr[i];
            maxIndex = i;
        }

    }
    cout << "Small" << smallest;
    cout << "large" << largest;
    swap(arr[minIndex],arr[maxIndex]);
}

void arrayInpOut(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }
    cout << "original array \n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main (){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    arrayInpOut(arr,n);
    swapMinMax(arr,n);
    cout << "\nSwap array \n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}