#include <iostream>

using namespace std;

int main() {
  for (int i = 0; false; ++i) {
    cout << i << endl;
  }

  for (int i = 0; i >= -10; --i) {
    cout << i << endl;
  }

  for (int i = 0; i <= 10; ++i) {
    if (i % 2 == 0) continue;
    if (i == 8) break;
    cout << i << endl;
  }
}
