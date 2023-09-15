#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n;
	cin >> n;

	cin.ignore();

	map <string, int> m;

	m.insert({ "Never gonna give you up", 1 });
	m.insert({ "Never gonna let you down", 1 });
	m.insert({ "Never gonna run around and desert you", 1 });
	m.insert({ "Never gonna make you cry", 1 });
	m.insert({ "Never gonna say goodbye", 1 });
	m.insert({ "Never gonna tell a lie and hurt you", 1 });
	m.insert({ "Never gonna stop", 1 });

	bool flag = 0;

	for (int i = 0; i < n; i++) {
		string str;
		getline(cin, str);

		if (m.find(str) == m.end()) flag = 1;
	}

	if (!flag) cout << "No";
	else cout << "Yes";
}
