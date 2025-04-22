#include <iostream>
using namespace std;
int main(){
    int i=1, n,sum=0 ;
    double avg;
    cout << "Enter n :";
    cin >> n;

    while (i<=n)
    {
        sum+=i;
        i++;
    }
    cout << "Sum of n numbers are : " << sum << "\n";
    avg =double(sum)/n;
    cout << "Average : " << avg;
    
    return 0 ;
}