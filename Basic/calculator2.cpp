#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cout << "------- Calculator ------- \n";
    cout << "1.Addition \n2.Difference \n3.Product \n4.Division \n5.All\n";
    cout << "Enter your choice : ";
    cin >> n;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    switch (n)
    {
    case 1:
        cout << "Sum of " << a << " and " << b << " = " << (a + b);
        break;
    case 2:
        cout << "Difference of " << a << " and " << b << " = " << (a - b);
        break;
    case 3:
        cout << "Product of " << a << " and " << b << " = " << (a * b);
        break;
    case 4:
        cout << "Division of " << a << " and " << b << " = " << (a / b);
        break;
        case 5:
        cout << "Sum of " << a << " and " << b << " = " << (a + b) << endl;
        cout << "Difference of " << a << " and " << b << " = " << (a - b) << endl;
        cout << "Product of " << a << " and " << b << " = " << (a * b) << endl;
        cout << "Division of " << a << " and " << b << " = " << (a / b) << endl;
        break;
    default:
        cout << "Plz enter the valid choice :)";
        break;
    }
    return 0;
}