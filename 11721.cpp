#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (i % 10 == 0 && i) cout << endl;
		cout << str[i];
	}
}
