#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, k, x, y, cnt = 0, a, b;
	cin >> n >> k >> x >> y;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;

		int dx = max(a, x) - min(a, x);
		int dy = max(b, y) - min(b, y);

		if (pow(dx, 2)+pow(dy, 2) > pow(k, 2)) cnt++;
	}

	cout << cnt;
}
