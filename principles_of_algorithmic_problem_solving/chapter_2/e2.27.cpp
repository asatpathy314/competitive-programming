#include <iostream>

using namespace std;

struct Quotient {
  int nominator;
  int denominator;

  // Construct a new Quotient with the given
  // numerator and denominator
  Quotient(int n, int d) {
    nominator = n;
    denominator = d;
  }

  // Return a new Quotient, this instance plus
  // the "other" instance
  Quotient add(const Quotient &other) const {
    int n1 = other.denominator * nominator;
    int d1 = other.denominator * denominator;
    int n2 = denominator * other.nominator;
    return Quotient(n1 + n2, d1);
  }

  // Return a new Quotient, this instance times
  // the "other" instance
  Quotient multiply(const Quotient &other) const {
    return Quotient(
      other.nominator * nominator,
      other.denominator * denominator
    );
  }

  // Output the value on the screen in the format n/d
  void print() const {
    cout << nominator << "/" << denominator << endl;
  }
};

int main() {
  Quotient q1(5, 7);
  Quotient q2(1, 2);
  q1.print();
  q2.print();
  q1.multiply(q2).print();
  q1.print();
  q2.print();
  q1.add(q2).print();
  q1.print();
  q2.print();
}
