#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Scenario #" << i + 1 << ":\n";

		long long arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];

		sort(arr, arr + 3);

		if (pow(arr[2], 2) == pow(arr[1], 2) + pow(arr[0], 2))
			cout << "yes\n\n";
		else cout << "no\n\n";

	}

}
