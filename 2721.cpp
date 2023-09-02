#include <iostream>

using namespace std;

int main() {
	int arr[302] = { 0, 1 };
	int W[301] = { 0 };

	for (int i = 1; i <= 301; i++) arr[i] = arr[i - 1] + i;
	for (int i = 1; i <= 300; i++) W[i] = i * arr[i + 1] + W[i-1];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		cout << W[num] << endl;
	}
}
