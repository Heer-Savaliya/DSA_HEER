// Optimized way of Pair Sum
// Time complecitiy = O(n)

#include <iostream>
#include<vector>
using namespace std;
vector<int> inputVector(vector<int> nums,int n){
    for(int i=0;i<n;i++){
        int val =0;
        cout << "Enter value of ["<<i<<"] = ";
        cin >> val;
        nums.push_back(val);
    }
    return nums;
}

vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0 ,j=n-1 ,pairSum =0;
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
    vector<int> nums;
    int n,target;
    cout << "Enter n : ";
    cin >> n;
    nums = inputVector(nums,n);

    cout << "Enter target = ";
    cin >> target;
    vector<int> ans = pairSum(nums,target) ;

    // ANswer printing
    cout << "Pair Sum of index are ";
    for(int ansVal : ans){
        cout << ansVal << " ";
    }
    return 0;
}