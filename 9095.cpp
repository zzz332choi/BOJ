#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	int arr[11] = { 0, 1, 2, 4 };

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	while (t--) {
		int n;
		cin >> n;

		cout << arr[n] << endl;
	}
}
