#include <iostream>

using namespace std;

int main() {
  int h, m;
  cin >> h >> m;
  m -= 45;
  if (m < 0) {
    h -= 1;
    m = 60 + m; 
  }
  if (h < 0) {
    h = 24 + h;
  }
  cout << h << " " << m << endl;
}
