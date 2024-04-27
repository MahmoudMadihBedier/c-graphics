#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double xf, yf, xe, ye;

    cout << "Enter the first point (x, y): ";
    cin >> xf >> yf;

    cout << "Enter the end point (x, y): ";
    cin >> xe >> ye;

    int deltaX = xe - xf;
    int deltaY = ye - yf;

    // Select the larger absolute step for the loop
    int steps = abs(deltaX) > abs(deltaY) ? abs(deltaX) : abs(deltaY);

    int x = round(xf);
    int y = round(yf);

    int p = 2 * (deltaY - deltaX);  // Initial decision parameter
    int const SWAP_XY = abs(deltaY) > abs(deltaX);  // Flag for swapping coordinates

    cout << "(x" << 0 << "," << "y" << 0 << ")" << "(" << x << "," << y << ")" << endl;

    for (int i = 1; i <= steps; ++i) {
        if (p < 0) {
            if (SWAP_XY) {
                y++;
            } else {
                x++;
            }
        } else {
            if (SWAP_XY) {
                x++;
                y++;
            } else {
                y++;
            }
            p += 2 * deltaY;
        }

        p += (SWAP_XY ? 2 * deltaX : 2 * (-deltaX));

        cout << "(x" << i << "," << "y" << i << ")" << "(" << x << "," << y << ")" << endl;
    }

    return 0;
}
