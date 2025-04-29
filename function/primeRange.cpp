#include <iostream>
using namespace std;
int prime(int start ,int end){
    bool isPrime = true;
    for(int i=start;i<=end-1;i++){
        if(end%i==0){
            isPrime = false;
            return false;
        }
        return true;
    }
}
int main(){
    int start ,end;
    cout << "ENter starting and ending value : ";
    cin >> start >> end;
    for(int i=start;i<=end;i++){
        if(prime(start,end)){
            cout << start << " ";
        }
    }
    prime(start,end);
}