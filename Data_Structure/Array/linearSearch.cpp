#include <iostream>
using namespace std;

// Enter n : 5
// Enter value : 3
// Enter value : 7
// Enter value : 8
// Enter value : 9
// Enter value : 2
// Enter search value = 8
// 2


// Enter n : 5
// Enter value : 4
// Enter value : 3
// Enter value : 6
// Enter value : 8
// Enter value : 9
// Enter search value = 10
// -1
int linearSearch(int nums[],int n,int search){
    for(int i=0;i<n;i++){
        if(nums[i]==search){
            return i;
        }
    }
    return -1;  //NOT found value
}
int main(){
    int n,search;
    cout << "Enter n : ";
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++){
        cout << "Enter value : ";
        cin >> nums[i];
    }
    cout << "Enter search value = ";
    cin >> search;

    cout << linearSearch(nums,n,search) << "\n";
}