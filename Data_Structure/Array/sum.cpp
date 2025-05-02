#include <iostream>
using namespace std;

// Enter n :4
// Enter array value = 23
// Enter array value = 64  
// Enter array value = 23
// Enter array value = 76

// Sum of array = 186

int main(){
    int n,sum=0;
    cout << "Enter n :";
    cin >>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cout << "Enter array value = ";
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    cout << "\nSum of array = "<< sum;
}