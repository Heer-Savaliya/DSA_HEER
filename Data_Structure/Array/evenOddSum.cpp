#include <iostream>
using namespace std;

// Enter n : 5
// Enter value of nums[0] = 3
// Enter value of nums[1] = 9
// Enter value of nums[2] = 6
// Enter value of nums[3] = 2
// Enter value of nums[4] = 6
// 3 9 6 2 6 

// Even indices sum = 15
// Odd indices sum = 11

int main(){
    int n,oddsum=0,evensum = 0;
    cout << "Enter n : ";
    cin >> n;
    int nums[n];
    for(int i=0;i<n ;i++){
        cout << "Enter value of nums[" <<i<<"] = ";
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
        if(i%2==0){
            evensum += nums[i];
        }else{
            oddsum += nums[i];
        }
    }

    cout << "Even indices sum = "<< evensum << "\n";
    cout << "Odd indices sum = "<< oddsum << "\n";
    return 0;
}