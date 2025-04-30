#include <iostream>
using namespace std;

// Enter start and end : 2000 2100
// 2000 2004 2008 2012 2016 2020 2024 2028 2032 2036 2040 2044 2048 2052 2056 2060 2064 2068 2072 2076 2080 2084 2088 2092 2096 2100 


int main(){
    int start,end;
    cout << "Enter start and end : ";
    cin >> start >> end;
    for(int i=start;i<=end;i++){
        if(i%4==0){
            cout << i << " ";
        }
    }
    return 0;
}