#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;

	bool arr[101] = { 0 };

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		if (arr[num]) cnt++;
		else arr[num] = 1;
	}

	cout << cnt;
}
