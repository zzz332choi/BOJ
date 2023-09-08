#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	int a = 'a' - 'A';

	for (int i = 0; str[i]; i++) {
		char c = str[i];
		if (str[i] <= 'Z') c += a;
		else c -= a;

		cout << c;
	}
}
