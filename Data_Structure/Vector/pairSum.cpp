// pairSum  O(n2)

// Enter number : 5
// Enter value of [0] = 4
// Enter value of [1] = 2
// Enter value of [2] = 3
// Enter value of [3] = 1
// Enter value of [4] = 8
// 4 2 3 1 8 

// Enter target sum = 4
// 2 3 (index)

#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums ,int target){
    vector<int> ans;
    int n= nums.size();
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums;
    int n,target;
    cout << "Enter number : ";
    cin >> n;
    for (int i=0;i<n;i++){
        int val =0;
        cout << "Enter value of [" <<i<<"] = ";
        cin >> val;
        nums.push_back(val);
    }

    // print
    for(int val : nums){
        cout << val << " ";
    }


    // pair sum 
    cout << "Enter target sum = " ;
    cin >> target;
    vector<int> ans =  pairSum(nums,target);

    // ANswer print
    for(int val : ans){
        cout << val << " ";
    }
    
    return 0;
}