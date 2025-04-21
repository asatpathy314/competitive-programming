#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

bool solve() {
  string p, s;
  cin >> p >> s;
  int p_ptr = 0, s_ptr = 0, count = 0;

  if (s.size() < p.size()) {
    return false;
  }

  char prev;
  
  while (p_ptr < p.size() && s_ptr < s.size()) {
    if (p.at(p_ptr) == s.at(s_ptr)) {
      if (prev != p.at(p_ptr)) {
        count = 0;
      }
      prev = p.at(p_ptr);
      ++count;
      ++p_ptr;
      ++s_ptr;
    } else if (count > 0 && prev == s.at(s_ptr)) {
      --count;
      ++s_ptr;
    } else {
      return false;
    }
  }

  if (p_ptr != p.size()) {
    return false;
  }
  
  while (s_ptr < s.size()) {
    if (count > 0 && prev == s.at(s_ptr)) {
      --count;
      ++s_ptr;
    } else {
      return false;
    }
  }
  
  return true;
}

int main() {
  int c;
  bool result;
  cin >> c;
  for (int i = 0; i < c; ++i) {
    result = solve();
    cout << (result ? "YES" : "NO") << endl;
  }
}
