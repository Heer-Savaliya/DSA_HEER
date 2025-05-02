#include <iostream>
using namespace std;

// Enter n :5
// Enter array value = 3
// Enter array value = 2
// Enter array value = 5
// Enter array value = 3
// Enter array value = 7

// Sum of array = 20
// Avegrage of array = 4

int main(){
    int n,sum=0,avg=0;
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
    avg=sum/n;
    cout << "\nSum of array = "<< sum << "\n";
    cout << "Avegrage of array = "<< avg;
}