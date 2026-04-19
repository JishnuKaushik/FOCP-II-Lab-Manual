/* Q13. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a solution to calculate the roots of a quadratic equation. */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, r1, r2;
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if(d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << r1 << " " << r2;
    }
    else if(d == 0) {
        r1 = -b / (2*a);
        cout << r1;
    }
    else {
        float real = -b / (2*a);
        float imag = sqrt(-d) / (2*a);
        cout << real << "+" << imag << "i" << " " << real << "-" << imag << "i";
    }

    return 0;
}