//Given a non-emty array of integers nums , evry element appears twice except for one.Find that single one (Usign single array)

// [2,2,1]  = 1
// [4,1,2,2,1]  = 4
// [1]  = 1
// [2,2,2]  = 2
// [2,2,1,1]  = 0

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums;
    int n;
    cout << "Enter n = ";
    cin >> n;
    for(int i = 0;i<n;i++){
        int val = 0;
        cout << "Enter value : ";
        cin >> val;
        nums.push_back(val);
    }
    for (int val : nums){
        cout << val << " ";
    }


    // main logic
    int ans =0;
    for(int val : nums){
        ans = ans^val;
    }
    cout << "Single one = "<< ans << "\n";
}