#include <iostream>
using namespace std ;

int main() {
    double xf,yf,xe,ye,xp,yp,deltaX,deltaY,pk ;
      cout << "Enter the first point " << endl;
      cin >> xf >> yf;
      cout << "Enter the end point" << endl;
      cin >> xe >> ye;
      deltaX =xe-xf;
      deltaY=ye-yf;
      pk=2*deltaY -deltaX;
      int i=0;
     while(i<(deltaX-1)){
          if (pk<0){
          pk=pk+2*deltaY;
          xp=xf++;
          yp=xf;
      }
      else{
       pk=pk+(2*deltaY)-(2*deltaX);
       xp=xf++;
       yp=yf++;
      }
       cout << "(x" << i << "," << "y" << i << ")" << "(" << xp<< "," << yp << ")" << endl;
      i++;
     }

    return 0;
}
