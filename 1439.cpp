#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	int one = 0, zero = 0;
	char last = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '0' && str[i] != last) {
			zero++;
			last = '0';
		}
		else if (str[i] == '1' && str[i] != last) {
			one++;
			last = '1';
		}
	}

	cout << min(zero, one);
}
