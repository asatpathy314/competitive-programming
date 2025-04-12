#include <iostream>

using namespace std;

int main() {
  int n, o = 0;
  cin >> n;
  string prev, current;

  // initialize
  cin >> prev;
  cin >> current;
  o = prev < current;
  prev = current;

  // continue
  for (int i = 2; i < n; ++i) {
    cin >> current;
    if (o != prev < current) {
      cout << "NEITHER" << endl;
      return 0;
    }
    prev = current;
  }

  cout << (o ? "INCREASING" : "DECREASING") << endl;
}
