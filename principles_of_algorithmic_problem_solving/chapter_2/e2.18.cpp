#include <iostream>

using namespace std;

int main() {
  int repetitions;
  cin >> repetitions;

  for (int i = repetitions - 1; i > -1; --i) {
    cout << "This is repetition " << i << endl;
  }
}
