#include <iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, k;
	cin >> a >> k;

	int* arr = new int[k + 1];

	for (int i = 0; i <= k; i++) arr[i] = 0;

	for (int i = a + 1; i <= k; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0 && i/2 >= a) arr[i] = min(arr[i], arr[i / 2] + 1);
	}

	cout << arr[k];

	delete[] arr;
}
