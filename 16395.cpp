#include <iostream>

using namespace std;

#define endl '\n'

int main() {
	int arr[31][31] = { 0 };
	arr[1][1] = 1;

	for (int i = 2; i < 31; i++) {
		for (int j = 1; j <= i; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i-1][j-1];
		}
	}

	int n, m;
	cin >> n >> m;

	cout << arr[n][m];

}
