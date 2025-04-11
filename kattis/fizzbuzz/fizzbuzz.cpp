#include <iostream>

using namespace std;

int main() {
  int x, y, n, f;
  cin >> x >> y >> n;

  for (int i = 1; i <= n; ++i) {
    f = 1;
    if (i % x == 0) {
      cout << "Fizz";
      f = 0;
    }
    if (i % y == 0) {
      cout << "Buzz";
      f = 0;
    }
    if (f) {
      cout << i;
    }
    cout << endl;
  }
}
