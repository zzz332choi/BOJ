#include <iostream>

using namespace std;

int main() {
  int n;
  unsigned long long ans = 0;

  cin >> n;
  string str;
  cin >> str;

  for (int i = 0; i < n; i++) {
    unsigned long long a = 0, b = 1;
    a += (str[i] - 'a' + 1);

    for(int j = 0; j<i; j++) {
      b *= 31;
      b %= 1234567891;
    }
    
    ans += (a * b);

  }

  cout << ans % 1234567891;
}
