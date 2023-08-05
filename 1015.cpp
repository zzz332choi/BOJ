#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int* arr1 = new int[n];
	int* arr2 = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}

	sort(arr2, arr2 + n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr1[i] != arr2[j]) continue;
			else {
				cout << j << ' ';
				arr2[j] = 0;
				break;
			}
		}
	}

	delete[] arr1, arr2;

}
