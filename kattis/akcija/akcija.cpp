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
  priority_queue<int> pq;
  int c, b;
  cin >> c;
  for (int i = 0; i < c; ++i) {
    cin >> b;
    pq.push(b);
  }
  b = 0;
  for (int i = 0; i < c; ++ i) {
    if ((i+1) % 3 != 0) {
      b += pq.top();
    }
    pq.pop();
  }
  cout << b << endl;
}
