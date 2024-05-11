//Design an algorithm for computing the value of a polynomial at a point x  :
#include <iostream>

using namespace std;

int main() {
    int n, s = 0, po = 1, x;

    // Input degree of polynomial
    cout << "Enter degree of polynomial: ";
    cin >> n;
    cout << "Enter x value: ";
    cin >> x;
    int *coff = new int[n + 1];

    // Input coefficients and calculate polynomial value
    for (int i = 0; i <= n; i++) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coff[i];
        s += coff[i] * po;
        po *= x;
    }
    cout << "Result = " << s << endl;
    delete[] coff;

    return 0;
}

