#include <iostream>
using namespace  std;
int main(){
    int n;
    cout << "ENter n : ";
    cin >> n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout << "Enter array value : ";
        cin >> marks[i];
    }
    for(int i=0;i<n;i++){
        cout <<marks[i] << " ";
    }
    return 0;
}