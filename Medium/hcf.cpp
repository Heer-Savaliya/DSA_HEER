#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    for (int i=1;i>0;i++){
        if(i%a==0 && i%b==0){
            cout << "LCM of "<< a << " and " << b << " = " << i;
            break;
        }
    }
    return 0;
}