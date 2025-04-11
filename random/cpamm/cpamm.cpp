#include <iostream>

using namespace std;

typedef unsigned long long ll;

int main() {
  cout << "Enter your ETH liquidity, TCC liquidity, exchange type and exchange amount in order." << endl;
  ll x, y, k, a;
  string type;
  cin >> x >> y >> type >> a;
  k = x * y;
  if (type == "ETH") {
    ll new_y = y + a;
    ll new_x = k / new_y;
    cout << "New ETH liqudidity: " << new_x << endl << "New TCC liqudidity: " << new_y << endl;
  } else {
    ll new_x = x + a;
    ll new_y = k / new_x;
    cout << "New ETH liqudidity: " << new_x << endl << "New TCC liqudidity: " << new_y << endl;
  } 
}

