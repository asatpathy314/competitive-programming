#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  double tot = M_PI * pow(r, 2);
  double piz = M_PI * pow(r-c, 2);
  cout.precision(10);
  cout << fixed << (piz / tot) * 100 << endl;
}
