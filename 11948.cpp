#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int sum = 0;

	int arr[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + 4, greater<int>());

	for (int i = 0; i < 3; i++) sum += arr[i];

	int M = 0;

	for (int i = 0; i < 2; i++) {
		int n;
		cin >> n;

		M = max(M, n);
	}

	cout << sum + M;
}
