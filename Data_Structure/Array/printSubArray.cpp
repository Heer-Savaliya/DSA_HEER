#include <iostream>
using namespace std;
void subArray(int arr[] ,int n){
    cout << "-------------Subarray-----------------";
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout << arr[i] ;
            }
            cout << " ";
        }
        cout << "\n";
    }
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
    subArray(arr,n);
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    funcArray(arr ,n);
    return 0;
}