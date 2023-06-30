#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int arr;
	for (int i = 0; i < 3; i++) {
		cin >> arr;

		int res = 0;

		int ab = arr % (a + b);
		int cd = arr % (c + d);

		if (ab <= a && ab!=0) res++;
		if (cd <= c && cd!=0) res++;

		cout << res << '\n';

	}
}
