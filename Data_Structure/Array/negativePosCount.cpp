#include <iostream>
using namespace std;

// Enter n : 5
// Enter value of nums[0] = 34
// Enter value of nums[1] = -6
// Enter value of nums[2] = 0
// Enter value of nums[3] = -23
// Enter value of nums[4] = 0
// 34 -6 0 -23 0 

// Postive number count = 1
// Negative number count = 2
// Zero count = 2

int main(){
    int n,pos=0,neg=0,zero=0;
    cout << "Enter n : ";
    cin >> n;
    int nums[n];
    for(int i=0;i<n ;i++){
        cout << "Enter value of nums[" <<i<<"] = ";
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
        if(nums[i]>0){
            pos++;
        }else if (nums[i]<0)
        {
            neg++;
        }else{
            zero++;
        }
        
    }

    cout << "\nPostive number count = "<< pos << "\n";
    cout << "Negative number count = "<< neg << "\n";
    cout << "Zero count = "<< zero << "\n";
    
    return 0;
}