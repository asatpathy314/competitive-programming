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
  int c, n, m, l, r, less;
  cin >> c;
  for (int i = 0; i < c; ++i) {
    cin >> n >> m >> l >> r;
    less = (n - m);
    if (abs(l) > less) {
      l += less;
    } else {
      less -= abs(l);
      l = 0;
      r -= less;
    }
    cout << l << " " << r << endl;
  }
}
