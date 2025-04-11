#include <iostream>
#include <cstring>

using namespace std;

int main() {
  int rooms, taken, room;
  cin >> rooms >> taken;

  if (rooms == taken) {
    cout << "too late" << endl;
    return 0;
  }

  int seq[rooms];
  memset(seq, 0, rooms * 4);
  
  for (int i = 0; i < taken; ++i) {
    cin >> room;
    seq[room - 1] = 1;
  }

  for (int j = 0; j < rooms; ++j) {
    if (seq[j] == 0) {
      cout << j + 1 << endl;
      break;
    }
  }
  return 0;
}
