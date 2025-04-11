#include <iostream>

using namespace std;

int main() {
  int x, n, m, t = 0;
  cin >> x >> n;
  for (int i = 0; i < n; ++i) {
    cin >> m;
    t += x - m;
  }
  cout << t + x << endl;
}
