#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;


int solve() {
  int l, num;
  cin >> l;
  set<int> nums;

  for (int i = 0; i < l; ++i) {
    cin >> num;
    nums.insert(num);
  }

  return nums.size();
}

int main() {
    int c, max;
    cin >> c;
    for (int i = 0; i < c; ++i) {
      max = solve();
      cout << max << endl;
    }
}
