#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int min, max;
    float x, h, y;
    cout << "Enter [min, max] and h\n";
    cin >> min >> max >> h;
    cout << "\tx" << "\t(x)" << endl;
    x = min;
    while (x <= max + h / 2)
    {
        y = ((x), 1 / 2) + 3 * x + x * x;
        cout << setw(10) << x << setw(10) << setprecision(3) << y << endl;
        x += h;
    }
    //007
    cout << "Do....While" << endl;
    x = min;
    cout << "\tx" << "\t(x)" << endl;
    do
    {
        y = pow((x), 1 / 2) + 3 * x + x * x;
        cout << setw(10) << x << setw(10) << setprecision(3) << y << endl;
        x += h;
    } while (x <= max + h / 2);
}
