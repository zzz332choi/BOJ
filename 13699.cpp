#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	long long arr[36] = { 1, 1, 2 };


	for (int i = 3; i < 36; i++)
		for (int j = 0; j < i; j++)
			arr[i] += arr[j] * arr[i - j - 1];

	cout << arr[n];
}
