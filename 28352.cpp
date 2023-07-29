#include <iostream>

using namespace std;

int main() {
	int n, w = 6;
	cin >> n;

	for (int i = 11; i <= n; i++) {
		w *= i;
	}

	cout << w;
}
