#include <iostream>

using namespace std;

int main() {
  int d[9];
  int t = 0;

  for (int i = 0; i < 9; ++i) {
    cin >> d[i];
    t += d[i];
  }

  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      if (i != j && t - d[i] - d[j] == 100) {
        for (int k = 0; k < 9; ++k) {
          if (k != i && k != j) {
            cout << d[k] << endl;
          }
        }
        return 0;
      }
    }
  }
}
