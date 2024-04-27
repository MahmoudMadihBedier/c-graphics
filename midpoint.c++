#include <iostream>
using namespace std;

int main() {
  double xf, yf, xe, ye, deltaX, deltaY, pk, Dinit, deltaD, Dnew;

  cout << "Enter the first point " << endl;
  cin >> xf >> yf;
  cout << "Enter the end point" << endl;
  cin >> xe >> ye;

  // Calculate delta
  deltaX = xe - xf;
  deltaY = ye - yf;
  Dinit = 2 * deltaY - deltaX;
  deltaD = 2 * (deltaY - deltaX);

  // Iteration variable
  int i = 0;

  cout << "(x" << 0 << "," << "y" << 0 << ")" << "(" << xf << "," << yf << ")" << endl;

  while (xf < xe) {
    // Condition
    if (Dinit < 0) {
      xf++;
      Dnew = Dinit + 2 * deltaY;
      Dinit = Dnew;
    } else {
      xf++;
      yf++;
      Dnew = Dinit + deltaD;
      Dinit = Dnew;
    }

    cout << "(x" << i << "," << "y" << i << ")" << "(" << xf << "," << yf << ")" << endl;
    i++;
  }

  return 0;
}
