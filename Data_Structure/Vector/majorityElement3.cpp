// Majority element (Leetcode 169)
// The majority element is the element that appears n/2 times .
// You may assume that the element always exists in the array.
//! Moore's voting algorithm  = 0(n)

// Enter n : 5
// Enter value of [0] = 1
// Enter value of [1] = 2
// Enter value of [2] = 2
// Enter value of [3] = 1
// Enter value of [4] = 2
// Majority Element = 2

// Enter n : 4
// Enter value of [0] = 1
// Enter value of [1] = 1
// Enter value of [2] = 2
// Enter value of [3] = 2
// Majority Element = -1 (Not exists)


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> inputNums(int n){
    vector<int> nums;
    for(int i=0;i<n;i++){
        int val =0; 
        cout << "Enter value of ["<<i<<"] = ";
        cin >>val;
        nums.push_back(val);
    }
    return nums;
}

int majorityElement(vector<int>& nums){
    int n=nums.size() ,freq =0,ans = 0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq ++;
        }else{
            freq--;
        }
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> nums = inputNums(n);
    int majorityElem = majorityElement(nums);
    cout << "Majority Element = " << majorityElem;
    return 0;
}