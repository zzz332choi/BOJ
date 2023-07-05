#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i=1; i<=n; i++) {
		cout << "Class " << i << '\n';

		int k, M = 0;
		cin >> k;

		int* arr = new int[k];

		for (int j = 0; j < k; j++) {
			cin >> arr[j];
		}
		
		sort(arr, arr + k);

		for(int j=1; j<k; j++) M = max(arr[j] - arr[j - 1], M);

		cout << "Max " << arr[k - 1] << ", Min " << arr[0] << ", Largest gap " << M << '\n';
		
		delete[] arr;
	}
}
