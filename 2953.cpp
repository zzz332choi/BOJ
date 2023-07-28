#include <iostream>

using namespace std;

int main() {
	int arr[5][5] = { 0 }, sum[5] = { 0 }, MAX = 0, winner = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			int num;
			cin >> num;

			arr[i][j] = num;
			sum[i] += num;
		}

		if (MAX < sum[i]) {
			MAX = sum[i];
			winner = i;
		}
	}

	cout << ++winner << ' ' << MAX;
}
