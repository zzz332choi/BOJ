#include <iostream>
#include <string>

using namespace std;

#define endl '\n'

int main() {
	char c;
	cin >> c;

	while (c != '#') {
		string str;
		cin.ignore();

		getline(cin, str);

		int cnt = 0;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';

			if (c != str[i]) continue;
			else cnt++;
		}

		cout << c << ' ' << cnt << endl;
		cin >> c;
	}
}

