#include <iostream>

using namespace std;

int main() {
  int c, t, count;
  bool unique;
  string trip;
  cin >> c;
  for (int _ = 0; _ < c; ++_) {
    cin >> t;
    count = 0;
    string trips[t];
    for (int i = 0; i < t; ++i) {
      cin >> trip;
      unique = true;
      for (string t : trips) {
        if (trip == t) {
          unique = false;
        }
      }
      
      if (unique) {
        trips[count] = trip;
        count += 1;
      }
    }
    cout << count << endl;;
  } 
}  
