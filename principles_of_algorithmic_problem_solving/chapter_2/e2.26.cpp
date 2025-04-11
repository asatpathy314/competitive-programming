#include <iostream>

using namespace std;

struct Point {
  double x;
  double y;

  Point(double theX, double theY) {
    x = theX;
    y = theY;
  }

  Point mirror() const {
    // return Point(x, -y);
    y = -y;
  }

  Point translate(double plusX, double plusY) {
    return Point(x + plusX, y + plusY);
  }

  string str() {
    return "(" + to_string(x) + ", " + to_string(y) + ")";
  }
};

int main() {
  Point p(4, 2.1);
  cout << p.str() << endl;
  p = p.translate(5, 5);
  cout << p.str() << endl;
}
