#include <iostream>

using namespace std;

#define endl '\n'

int main() {
	int n;
	cin >> n;

	int cnt1 = 1, cnt2 = 1, M = 1;
	int num, prev;

	cin >> prev;

	for (int i = 1; i < n; i++) {
		cin >> num;

		if (num > prev) {
			cnt1++;
			cnt2 = 1;
		}
		else if (num < prev) {
			cnt2++;
			cnt1 = 1;
		}

		else {
			cnt1++;
			cnt2++;
		}

		M = max(M, cnt1);
		M = max(M, cnt2);

		prev = num;
	}
	
	cout << M;
	
}

