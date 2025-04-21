#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int c, s, n;
  cin >> c;
  for (int i = 0; i < c; ++i) {
    vi a;
    cin >> s;

    for (int j = 0; j < s; ++j) {
      for (int k = 0; k < s; ++k) {
        cin >> n;
        if (j == 0) {
          a.push_back(n);
        } else if (k == s - 1) {
          a.push_back(n);
        }
      }
    }

    int b[s * 2 + 1];

    for (int i = 0; i < a.size() + 1; ++i) {
      b[i] = 0;
    }
    for (int i = 0; i < a.size(); ++i) {
      b[a.at(i)] = 1;
    }
  

    for (int i = 1; i < a.size() + 2; ++i) {
      if (b[i] != 1) {
        cout << i << " ";
      }
    } 
    
    for (int i = 0; i < a.size(); ++i) {
      cout << a.at(i) << " ";
    }
    cout << endl;
  }
}
