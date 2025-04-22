#include <iostream>
using namespace std;
int main(){
    double f,c;
    cout << "Enter fahrenheit : " ;
    cin >> f;
    c=(f-32)/1.8;
    cout << "Fahrenheit to celicus : " << c;
    return 0 ;
}