#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[200000] = { 0 };
	for (int i = 0; i < n; i++) cin >> arr[i];

	pair <int, int> M, m;
	M = m = { arr[0], 0};
	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > M.first) {
			M = { arr[i], i };
			ans = max(M.first - m.first, ans);
		}
		else if (arr[i] < m.first) {
			m = M = { arr[i], i };
		}
	}

	cout << ans;
}
