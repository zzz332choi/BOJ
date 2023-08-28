#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int* arr = new int[n + 1];

	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 10007;
	}

	cout << arr[n] % 10007;

	delete[] arr;
}
