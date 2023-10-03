#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int arr1[500][500] = { 0 };
	int arr2[501] = { 0 };
	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> arr2[j];
		}

		for (int j = 0; j <= i; j++) {
			arr1[i][j] += arr2[j];

			if (i > 0) {
				if (j > 0) arr1[i][j] += max(arr1[i - 1][j], arr1[i - 1][j - 1]);
				else arr1[i][0] += arr1[i - 1][0];
			}

		}
	}

	int M = 0;
	for (int i = 0; i < n; i++) M = max(M, arr1[n-1][i]);

	cout << M;

}
