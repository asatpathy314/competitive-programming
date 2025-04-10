#include <iostream>

using namespace std;

int main() {
  int s;
  cin >> s;
  if ((s & 1) == 0) {
    cout << "Bob" << endl;
  } else {
    cout << "Alice" << endl;
  }
}
