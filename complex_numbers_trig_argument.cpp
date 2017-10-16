#include <iostream>
#include <math.h>
using namespace std;

int main () {
  const double PI = 3.14159265;
  double r = sqrt(2);
  double a = 1;
  double sin_phi, asin_phi;
  sin_phi = a/r;
  asin_phi = asin(sin_phi) * 180.0 / PI;
  cout << "angle is " << asin_phi << " degrees" << endl;
}