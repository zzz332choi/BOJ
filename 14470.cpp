#include <iostream>

using namespace std;

#define endl '\n'

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int t = 0;

	if (a < 0) {
		t -= a * c;
		t += d;
		t += b * e;
	}
	else {
		t += (b - a) * e;
	}
	
	cout << t;

}
