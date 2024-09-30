#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    double discri = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(discri));

    if (discri > 0) {
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << (-b + sqrt_val) / (2 * a) << endl;
        cout << "Root 2 = " << (-b - sqrt_val) / (2 * a) << endl;
    }
    else if (discri == 0) {
        cout << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << -b / (2 * a) << endl;
    }
    else {
        cout << "Roots are imaginary." << endl;
        cout << "Root 1 = " << -b / (2 * a) << " + i" << sqrt_val / (2 * a) << endl;
        cout << "Root 2 = " << -b / (2 * a) << " - i" << sqrt_val / (2 * a) << endl;
    }

    return 0;
}

