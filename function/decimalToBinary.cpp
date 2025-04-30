#include <iostream>
using namespace std;

// num =5
// 2/5 =1   (10 raise to 0)     1*10(0) 1
// 2/2=0     (10 raise to 1)    0*10(1) 0
// 2/1 =1    (10 raise to 2)    1*10(2) 100

// 1+0+100 = 101



int dToBinary(int num){
    int ans = 0;
    int pow =1;
    while(num >0){
        int rem = num%2;
        num =num/2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;  // binary form
}
int main(){
    int num;
    cout << "Enter number to convert into binary : ";
    cin >> num;
    cout << "Binary : " << dToBinary(num) << "\n";
    return 0;
}