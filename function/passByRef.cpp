#include <iostream>
using namespace std;

// In func 
// In main 
// 2 4 6 

void changeArr(int arr[] ,int size){
    cout << "In func \n";
    for(int i=0;i<size;i++){
        arr[i]*=2;
    }
}
int main(){
    int arr[]={1,2,3};
    changeArr(arr,3);
    cout << "In main \n";
    for(int i=0;i<3;i++){
        cout << arr[i] << " ";  // original value also change
    }
    cout << endl;
    return 0;
}