#include <iostream>

using namespace std;

int main() {
  string inst;
  int f = 1;
  cin >> inst;
  
  for (int i = 0; i < inst.size(); ++i) {
    if (inst[i] == 'A') {
      if (f == 1) {
        f = 2;
      } else if (f == 2) {
        f = 1;
      }
    } else if (inst[i] == 'B') {
      if (f == 2) {
        f = 3;
      } else if (f == 3) {
        f = 2;
      }
    } else if (inst[i] == 'C') {
      if (f == 1) {
        f = 3;
      } else if (f == 3) {
        f = 1;
      }
    }
  }

  cout << f << endl;
}
