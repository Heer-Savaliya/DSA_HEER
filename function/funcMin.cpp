#include <iostream>
using namespace std;
int funcMin(int a , int b){    //parameters
    if(a<b){
        cout << a << " is minimum number ";
    }else{
        cout << b << " is minimum number ";
    }
    return a;
}
int main(){
    int a ,b;
    cout << "Enter a abd b = ";
    cin >> a>>b;
    funcMin(a,b);   //arguments
    return 0;
}