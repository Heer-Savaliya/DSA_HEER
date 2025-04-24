#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    string num =to_string(n);
    for(int i =0;i<num.length();i++){
        string val =to_string(num[i]);
        cout << val << " ";
        int f=1;
        // for (int j=1;j<=num[i];j++){
        //     // f*=j;
        //     cout << j;
        // }
        // cout << "factorial : " << f;
    }
    return 0;
}