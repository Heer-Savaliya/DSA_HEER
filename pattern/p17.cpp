#include <iostream>
using namespace std;
int main(){

    // AAAA
    //  BBB
    //   CC
    //    D

    int n;
    cout << "Enter n : ";
    cin >> n;
    char ch ='A';
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout << ch;
        }
        ch++;
        cout << "\n";
    }

    return 0;
}