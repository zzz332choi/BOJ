#include <iostream>

using namespace std;

#define endl '\n'

int main() {
	int n;
	cin >> n;

	int cnt = 0;

	cnt = n / 3;
	cnt += n % 3;

	if (cnt % 2) cout << "SK";
	else cout << "CY";
}
