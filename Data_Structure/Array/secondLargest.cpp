// Find the second largest elemeent in array

#include <iostream>
using namespace std;
int main(){
    int n,largest=INT32_MIN ,secondLar;
    cout << "ENter n : ";
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++){
        cout << "Enter value : ";
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
        largest = max(nums[i],largest);
        secondLar =  largest;
    }
    return 0;
}
