#include <iostream>

using namespace std;

#define endl '\n'

int main() {
	int arr[31][31] = { 0 };
	arr[1][1] = 1;
	arr[2][1] = 1, arr[2][2] = 1;

	for (int i = 3; i <= 30; i++) {
		for (int j = 1; j <= i; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	int r, w, c, sum = 0;
	cin >> r >> c >> w;

	for (int i = r; i < r + w; i++) {
		for (int j = c; j <= c + i - r; j++) {
			sum += arr[i][j];
		}
	}

	cout << sum;
}
