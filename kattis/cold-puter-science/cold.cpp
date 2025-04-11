#include <iostream>

using namespace std;

int main() {
  int c, t, b = 0;
  cin >> c;
  for (int i = 0; i < c; ++i) {
    cin >> t;
    if (t < 0) {
      ++b;
    }
  }
  cout << b << endl;
}
