#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, r, c, ans = 0;
	cin >> n >> r >> c;

	while (n != 0) {
		n--;

		int num = pow(2, n);

		if (r < num && c < num) {
			ans += num * num * 0;
		}
		else if (r < num && c >= num) {
			ans += num * num * 1;
			c -= pow(2, n);
		}
		else if (r >= num && c < num) {
			ans += num * num * 2;
			r -= pow(2, n);
		}
		else if (r >= num && c >= num) {
			ans += num * num * 3;
			r -= pow(2, n);
			c -= pow(2, n);
		}
		
	}

	cout << ans;
	
}
