#include <iostream>
using namespace std;

// Enter n : 7
// 0 1 1 2 3 5 8 13 

// even fibonic
// Enter n : 9
// 0 2 8 34 


int main(){
    int n ,a=0,b=1 ,next =0;
    cout << "Enter n : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout << a << " ";
            continue;
        }
        if(i==2 && b%2==0){
            cout << b << " ";
        }
        next = a+b;
        a = b;
        b=next;
        if(next%2==0){
            cout << next << " ";
        }
    }
    return 0;
}