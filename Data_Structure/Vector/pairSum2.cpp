// Optimized way of Pair Sum
// Time complecitiy = O(n)

#include <iostream>
#include<vector>
using namespace std;
vector<int> inputVector(int n){
    vector<int> nums;
    for(int i=0;i<n;i++){
        int val =0;
        cout << "Enter value of ["<<i<<"] = ";
        cin >> val;
        nums.push_back(val);
    }
    return nums;
}

vector<int> pairSum(const vector<int>& nums,int target){
    vector<int> ans;
    int i = 0 ,j=nums.size()-1 ,pairSum =0;
    while(i<j){
        pairSum = nums[i]+nums[j];
        if(pairSum < target){
            i++;
        }else if(pairSum > target){
            j--;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    int n,target;
    cout << "Enter n : ";
    cin >> n;
    vector<int> nums = inputVector(n);

    cout << "Enter target = ";
    cin >> target;
    vector<int> result = pairSum(nums,target) ;

    // ANswer printing
    if (!result.empty())
        cout << "Pair found at indices: " << result[0] << " and " << result[1] << "\n";
    else
        cout << "No pair found.\n";
    return 0;
}