#include <iostream>
#include <math.h>
using namespace std;

// Enter n : 5
// Enter value : 9
// Enter value : 6
// Enter value : 3
// Enter value : 2
// Enter value : 6
// original array 
// 9 6 3 2 6
// Reverse array
// 6 2 3 6 9

void reverseArray(int arr[] ,int n){
    int start =0 ,end=n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
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
    reverseArray(arr,n);
}

int main (){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    arrayInpOut(arr,n);
    
    cout << "\nReverse array \n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}