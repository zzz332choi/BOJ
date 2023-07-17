#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int C;
    cin >> C;

    int a = C / 25;
    C -= a * 25;

    int b = C / 10;
    C -= b * 10;

    int c = C / 5;
    C -= c * 5;

    double d = C;

    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
  }
}
