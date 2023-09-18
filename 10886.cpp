#include <iostream>

using namespace std;

int main() {
	int n, cnt0 = 0, cnt1 = 0;
	cin >> n;
	
	while (n--) {
		int num;
		cin >> num;

		if (num) cnt1++;
		else cnt0++;
	}

	if (cnt1 > cnt0) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
}
