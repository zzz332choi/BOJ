#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	long long * arr = new long long[n + 1];

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;

	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[n];

}
