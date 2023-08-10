#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, cnt = 0;
	cin >> n >> k;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	while (k && n) {
		int cnt0 = 0;
		cnt0 = k / arr[--n];

		if (cnt0) {
			k %= cnt0 * arr[n];
			cnt += cnt0;
		}
	}

	cout << cnt;
	delete[] arr;
}
