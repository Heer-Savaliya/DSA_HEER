#include <iostream>
using namespace std;

// strong number = 1 ,2 145 , 40585
// 145 

// 1! = 1
// 4! = 4*3*2*1 = 24
// 5! = 5*4*3*2*1 = 120

// 1+24+120   = 145 (strong number)


int factorial(int rem){
    int fact=1;
    for(int i=1;i<=rem;i++){
        fact*=i;
    }
    return fact;
}
int strongNum(int n){
    int original = n;
    int ans =0;
    while(n>0){
        int rem = n%10;
        int f = factorial(rem);
        n/=10;
        ans+=f;
    }

    if(original==ans){
        cout << "Is strong number \n";
    }else{
        cout << "Not strong number \n";
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << strongNum(n);
    return 0;
}