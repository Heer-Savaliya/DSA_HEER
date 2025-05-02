#include <iostream>
using namespace  std;

// Enter n : 5
// Enter array value : 40
// Enter array value : 60
// Enter array value : 90
// Enter array value : 23
// Enter array value : 67
// 40 60 90 23 67

// Pass student = 4
// Fail student = 1

int main(){
    int n,pass=0,fail=0;
    cout << "Enter n : ";
    cin >> n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout << "Enter array value : ";
        cin >> marks[i];
    }
    for(int i=0;i<n;i++){
        cout <<marks[i] << " ";
        if(marks[i]>=40){
            pass++;
        }else{
            fail++;
        }
    }
    cout << "Pass student = " << pass <<"\n";
    cout << "Fail student = " << fail <<"\n";
    return 0;
}