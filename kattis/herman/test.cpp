#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double r;
  cin >> r;
  cout << setprecision(10) << setfill('0') << std::setw(7) << std::fixed  << M_PI * r * r << endl << 2.0 * r * r << endl;
}
