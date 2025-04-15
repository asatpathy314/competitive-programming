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
  vector<string> c;
  c.push_back("some");
  c.push_back("thing");

  // iterate forward
  for (auto i = c.begin(); i != c.end(); ++i) {
    cout << *i << endl;
  }
  cout << "let's switch it up!" << endl;
  // iterate backwards
  for (auto i = c.rbegin(); i != c.rend(); ++i) {
    cout << *i << endl;
  }
}
