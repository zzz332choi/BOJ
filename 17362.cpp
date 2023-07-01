#include <iostream>

using namespace std;

int main() {
	long long int n;
	cin >> n;

	n %= static_cast<long long>(8);

	int res = 0;

	if (n == 1) res = 1;
	else if (n == 2 || n == 0) res = 2;
	else if (n == 3 || n == 7) res = 3;
	else if (n == 4 || n == 6) res = 4;
	else if (n == 5) res = 5;

	cout << res;
}
