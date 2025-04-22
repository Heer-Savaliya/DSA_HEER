#include <iostream>
using namespace std;
int main()
{
    int choice, s, l, b, r, base , height;
    cout << "------Area-------\n";
    cout << "1.Area of square \n2.Area of rectangle \n3.Area of circle \n4.Area of triangle \n";
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter side : ";
        cin >> s;
        cout << "Area of square = " << (s * s);
        break;
    case 2:
        cout << "Enter length and breath : ";
        cin >> l >> b;
        cout << "Area of rectangle = " << (l * b);
        break;
    case 3:
        cout << "Enter radius : ";
        cin >> r;
        cout << "Area of circle = " << (3.14 * r * r);
        break;

        case 4:
        cout << "Enter base and height : ";
        cin >> base >> height;
        cout << "Area of triangle = " << (0.5*base*height);
        break;
    default:
        cout << "Plz enter valid choice :)";
        break;
    }
    return 0;
}