#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n--) {
		string str;
		
		cin >> str;

		int num1 = 0, num2 = 0;

		for (int i = 0; i < 3; i++) {
			num1 *= 26;
			num1 += str[i] - 'A';
		}

		for (int j = 4; j < 8; j++) {
			num2 *= 10;
			num2 += str[j] - '0';
		}

		if (num1 - num2 >= -100 && num1 - num2 <= 100) cout << "nice\n";
		else cout << "not nice\n";
	}
}
