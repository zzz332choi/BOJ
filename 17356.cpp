#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  double m = (double)(b - a) / 400;

  double ans = 1 / (1 + pow(10, m));

  cout << fixed;
  cout.precision(4);

  cout << ans;
}
