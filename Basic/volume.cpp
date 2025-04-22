#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int choice, s, r, height;
    cout << "------Volume-------\n";
    cout << "1.Volume of cube \n2.Volume of cylinder \n3.Volume of sphere \n4.Area of triangle \n";
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter side : ";
        cin >> s;
        cout << "Volume of cube = " << (pow(s,3));
        break;
    case 2:
        cout << "Enter radius and height : ";
        cin >> r >> height;
        cout << "Volume of cylinder = " << (3.14*r*r * height);
        break;
    case 3:
        cout << "Enter radius : ";
        cin >> r;
        cout << "Volume of sphere = " << (1.33 * 3.14 * r * r*r);
        break;

    default:
        cout << "Plz enter valid choice :)";
        break;
    }
    return 0;
}