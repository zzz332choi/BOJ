#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);

	while (str != "END") {
		int len = str.length();

		for (int i = len - 1; i >= 0; i--) cout << str[i];
		cout << endl;

		getline(cin, str);
	}
}
