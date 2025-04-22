#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cout << "Enter n : ";
    cin >> n;

    //--------- While loop----------

    // while (i<=n)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    //---------- for-----------

    // for(i=1;i<=n;i++){
    //     cout << i << " ";
    // }

    // --------do-while---------

    do
    {
        cout << i << " ";
        i++;
    } while (i<=n);
    
    
    return 0 ;
}