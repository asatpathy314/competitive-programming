#include <bits/stdc++.h>
using namespace std;

int solve(){
    int l;
    string s;
    cin >> l >> s;

    // 1) Find best_gain exactly as before
    const int INF = l + 5;
    vector<int> first_cut(4, INF), last_cut(4, -INF);
    for(int c = 0; c < l; ++c){
        int L = (c == 0 ? 0 : s[c-1] - '0');
        int R =      s[c]   - '0';
        int id = L*2 + R;
        first_cut[id] = min(first_cut[id], c);
        last_cut [id] = max(last_cut [id], c);
    }
    int gain[4][4];
    for(int id1 = 0; id1 < 4; ++id1){
        int a = id1/2, b = id1%2;
        for(int id2 = 0; id2 < 4; ++id2){
            int c_ = id2/2, d = id2%2;
            int oldL = (a!=b), oldR = (c_!=d);
            int newL = (a!=c_), newR = (b!=d);
            gain[id1][id2] = oldL + oldR - newL - newR;
        }
    }
    int best_gain = 0;
    for(int id1=0; id1<4; ++id1){
      if(first_cut[id1] == INF) continue;
      for(int id2=0; id2<4; ++id2){
        if(last_cut[id2] < first_cut[id1]) continue;
        best_gain = max(best_gain, gain[id1][id2]);
      }
    }

    // 2) Compute original transitions with implicit leading 0
    int transitions = 0;
    int prev = 0;
    for(char c : s){
        int cur = c - '0';
        if(cur != prev) ++transitions;
        prev = cur;
    }

    // 3) Final cost = transitions + length − best_gain
    return transitions + l - best_gain;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;
    cin >> c;                // ← must read number of test cases!
    while(c--){
        cout << solve() << "\n";
    }
    return 0;
}
