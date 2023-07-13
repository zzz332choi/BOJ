#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n--) {
		int n_, sum = 0;
		cin >> n_;

		while (n_--) {
			int a;
			cin >> a;

			sum += a;
		}
		
		cout << sum << endl;
	}
}
