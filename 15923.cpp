#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;

	int arr[20][2] = { 0 };

	for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];

	for (int i = 0; i < n - 1; i++) {
		sum += max(arr[i][0], arr[i + 1][0]) - min(arr[i][0], arr[i + 1][0]);
		sum += max(arr[i][1], arr[i + 1][1]) - min(arr[i][1], arr[i + 1][1]);
	}

	sum += max(arr[0][0], arr[n - 1][0]) - min(arr[0][0], arr[n - 1][0]);
	sum += max(arr[0][1], arr[n - 1][1]) - min(arr[0][1], arr[n - 1][1]);

	cout << sum;
}
