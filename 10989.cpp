#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	int* arr = new int[10001];

	for (int i = 0; i < 10001; i++) arr[i] = 0;

	int num;

	for (int i = 0; i < t; i++) {
		cin >> num;
		arr[num]++;
	}

	for (int i = 0; i < 10001; i++)	while (arr[i]--) cout << i << '\n';

}
