#include <bits/stdc++.h>
#include <numeric>
#include <queue>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int n = 0;
  int op, num, p_num, s_num, pq_num;
  bool error = false;
  while (cin >> n) {
    int possibilities[3] = {1, 1, 1};
    queue<int> q;
    stack<int> s;
    priority_queue<int> pq;
    for (int i = 0; i < n; ++i) {
      cin >> op >> num;
      if (error) {
        continue;
      }
      if (op == 1) { // insert
        q.push(num);
        s.push(num);
        pq.push(num);
      } else { // take out
        if (q.empty()) {
          error = true;
          possibilities[0] = possibilities[1] = possibilities[2] = 0;
        } else {
          p_num = q.front(); q.pop();
          s_num = s.top(); s.pop();
          pq_num = pq.top(); pq.pop();
          if (p_num != num) possibilities[0] = 0;
          if (s_num != num) possibilities[1] = 0;
          if (pq_num != num) possibilities[2] = 0;
        }
      }
    }
    // print
    int sum = accumulate(possibilities, possibilities + 3, 0);
    if (sum == 0) {
      cout << "impossible" << endl;
    } else if (sum > 1) {
      cout << "not sure" << endl;
    } else if (possibilities[0]) {
      cout << "queue" << endl;
    } else if (possibilities[1]) {
      cout << "stack" << endl;
    } else if (possibilities[2]) {
      cout << "priority queue" << endl;
    }
  } 
}
