#include <iostream>
using namespace std;

// 1011 = 11

// pow =1 
//  1*1   =1
//  1*2^1   =2
//  0*2^2   =0
//  1*2^3   =8


// 8 + 2+1 =11

int bToDecimal(int num){
    int ans=0,pow=1;
    while(num > 0){
        int rem = num %10;
        num/=10;
        ans+=(rem*pow);
        pow*=2;
    }

    return ans;

}
int main(){
    int num;
    cout <<"Enter binary number to convert into decimal : ";
    cin >> num;
    cout << "Decimal Number : " << bToDecimal(num) << "\n";
    return 0;
}