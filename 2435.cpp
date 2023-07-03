#include <iostream>

using namespace std;

int main() {
	int n, k, M = -20000000;
	cin >> n >> k;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i <= n - k; i++) {
		int sum = 0;
		for (int j = i; j < i + k; j++) sum += arr[j];

		M = max(M, sum);
	}

	cout << M;

	delete[] arr;
}
