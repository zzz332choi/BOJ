#include <iostream>

using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;

	a %= b;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		a *= 10;
		ans = a / b;
		a %= b;
	}

	cout << ans;
}
