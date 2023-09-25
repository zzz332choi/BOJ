#include <iostream>

using namespace std;

#define aaaa 1000000

int main() {
	int n;
	cin >> n;

	int arr[2000001] = { 0 };
	arr[aaaa + 1] = arr[aaaa + 2] = 1;

	for (int i = aaaa + 3; i <= 2 * aaaa; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 1000000000;
	}

	for (int i = aaaa + 2; i >= 2; i--) {
		arr[i - 2] = arr[i] - arr[i - 1];
		arr[i - 2] %= 1000000000;
	}

	if (arr[aaaa + n] > 0) {
		cout << 1 << endl;
		cout << arr[aaaa + n];
	}
	else if (arr[aaaa + n] == 0) cout << 0 << endl << 0;

	else if (arr[aaaa + n] < 0) {
		cout << -1 << endl;
		cout << -arr[aaaa + n];
	}
}
