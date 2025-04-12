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
  int d, a, b;
  cin >> d >> a >> b;
  a += b;
  a = a / d;
  a = a % 2;
  if (a == 1) {
    cout << "opponent" << endl;
  } else {
    cout << "paul" << endl;
  }
}
