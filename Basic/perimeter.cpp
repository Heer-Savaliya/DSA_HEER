#include <iostream>
using namespace std;
int main()
{
    int ch, s, l, b,r , t1,t2,t3;
    cout << "------------Perimeter----------\n";
    cout << "1.Perimeter of square \n2.Perimeter of rectangle \n3.Perimeter of triangle \n4.Perimeter of circle \n";
    cout << "Enter your choice : \n";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter side : ";
        cin >> s;
        cout << "Perimeter of the square " << (4 * s);
        break;
    case 2:
        cout << "Enter lenght and breath : ";
        cin >> l >> b;
        cout << "Perimeter of the rectangle " << (2*(l+b));
        break;
    case 3:
        cout << "Enter all 3 sides : ";
        cin >> t1 >> t2 >> t3;
        cout << "Perimeter of the triangle " << (t1+t2+t3);
        break;
    case 4:
        cout << "Enter radius : ";
        cin >> r;
        cout << "Perimeter of the circle " << (2*3.14*r);
        break;

    default:
        cout << "Plz enter the valid choice :)";
        break;
    }
    return 0;
}