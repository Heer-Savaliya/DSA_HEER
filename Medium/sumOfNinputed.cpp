#include <iostream>
using namespace std;

// Enter n = 3;
// 1 5 4 = 10

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int num,sum=0;
    for(int i =1;i<=n;i++){
        cout << "Enter num =";
        cin >> num ;
        sum+=num;
    }
    cout << " Sum of entered digit = " << sum << "\n";
    return 0;
}