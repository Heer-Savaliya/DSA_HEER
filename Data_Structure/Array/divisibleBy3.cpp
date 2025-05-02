#include <iostream>
using namespace std;

// Enter n : 5
// Enter value of nums[0] = 3
// Enter value of nums[1] = 18
// Enter value of nums[2] = 15
// Enter value of nums[3] = 4
// Enter value of nums[4] = 5
// 3 18 15 4 5

// Numbers that are divisble by 3 but not with 5 count's = 2

int main(){
    int n,count=0;
    cout << "Enter n : ";
    cin >> n;
    int nums[n];
    for(int i=0;i<n ;i++){
        cout << "Enter value of nums[" <<i<<"] = ";
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
        if(nums[i]%3==0 && nums[i]%5!=0){
            count ++;
        }
    }

    cout << "\nNumbers that are divisble by 3 but not with 5 count's = "<< count << "\n";
    
    return 0;
}