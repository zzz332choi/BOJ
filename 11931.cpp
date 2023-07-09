#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	int* arr = new int[t];

	for (int i = 0; i < t; i++) cin >> arr[i];

	sort(arr, arr + t);

	for (int i = t - 1; i >= 0; i--) cout << arr[i] << '\n';

}
