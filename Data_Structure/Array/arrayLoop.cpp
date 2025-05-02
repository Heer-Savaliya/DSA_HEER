#include <iostream>
using namespace std;
int main(){
    int marks[5] = {78 ,23,56,65,34};
    int size = sizeof(marks) /sizeof(int);   //5
    
    for(int i=0; i<size;i++){
        cout << marks[i] << " ";
    }
    return 0;
}