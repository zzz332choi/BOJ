#include <iostream>
#include <cstring>

using namespace std;

#define endl '\n'

int main() {
	char s[5] = { 0 };
	cin >> s;

	int a, b;

	if (strlen(s) == 2) {
		a = s[0] - '0';
		b = s[1] - '0';
	}

	else if (strlen(s) == 3) {
		if (s[1] == '0') {
			a = 10;
			b = s[2] - '0';
		}
		else {
			a = s[0] - '0';
			b = 10;
		}
	}

	else if (strlen(s) == 4) {
		a = 10;
		b = 10;
	}

	cout << a + b;
}
