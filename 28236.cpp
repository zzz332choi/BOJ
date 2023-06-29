#include <iostream>

using namespace std;

int main() {

	int n, m, k;
	cin >> n >> m >> k;

	long long int minimum = 6000000;

	long long int* arr = new long long[k];

	for (int i = 0; i < k; i++) {
		int f, d;

		cin >> f >> d;

		arr[i] = f + (m - d);

		minimum = min(minimum, arr[i]);
	}

	for (int i = 0; i < k; i++) {
		if (arr[i] == minimum) {
			cout << i + 1;
			break;
		}
	}

